#!/opt/local/bin/python
# -*- coding: utf-8 -*-

#
# Libraries needed:
#  - pySerial
#  - textwrap
#  - tweepy
#  - enchant
#  - py27-nltk
#    * matplotlib
#  - install the nltk US english disctionary using nltk.download()
#  - enchant will complain about the dictionary, so do the following
#        sudo port install aspell-dict-en

# Note:  If you are using Macports to install the libraries, make sure that the macports version is selected
#        sudo port select python python27

import tweepy
from textwrap import TextWrapper
from calculation import *
import serial
# Needed for sleep() to test the LED cube
import time
import random

# Global to tell the program if there is an arduino board attached to the serial port
serial_on = 1
# configures the serial port
if serial_on:
    ser = serial.Serial('/dev/tty.usbmodem1421', 9600)


# Translates the measurements into cube coordinates
# For each axis, 
#     readings between the lower and upper quartile will light the middle LED
#     readings above the upper quartile will light the distal LED
#     readings below the lower quartile will light the proximal LED

def getLEDCoordinates(valence, arousal, dominance):
    layer = 0
    x = 0
    y = 0
    if valence < 5.416 :
        layer = 0
    elif valence < 7.311 :
        layer = 1
    else:
        layer = 2

    if arousal < 4.744 :
        x = 0
    elif arousal < 5.690:
        x = 1
    else:
        x = 2

    if dominance < 5.068:
        y = 0
    elif dominance < 5.884 :
        y = 1
    else:
        y = 2

    return [layer, x, y]

    

# class StreamListener(tweepy.StreamListener):
#     def on_status(self, tweet):
#         print 'Ran on_status'

#     def on_error(self, status_code):
#         print 'Error: ' + repr(status_code)
#         return False

#     def on_data(self, data):
#         print 'running' + data

class StreamListener(tweepy.StreamListener):
    status_wrapper = TextWrapper(width=140, initial_indent='', subsequent_indent='    ')
    def on_status(self, status):
        try:
            tweetText =  self.status_wrapper.fill(status.text)
            #print self.status_wrapper.fill(status.text)
            #print '\n %s  %s  via %s\n' % (status.author.screen_name, status.created_at, status.source)
            # TODO:  Do the ANEW calculations here, then send it to the LED cube.
            #print "Raw Tweet:", tweetText
            print "  ", tweetText
            #asciitweet = unicodedata.normalize('NFKD', tweetText).encode('ascii','ignore')
            asciitweet = tweetText.encode('ascii', 'ignore')
            myrand = random.random()
            if myrand < 0.01:
                print "Printing to GLO:", asciitweet
                ser.write(asciitweet)
            else:
                print myrand
        except Exception, e:
            # Catch any unicode errors while printing to console
            # and just ignore them to avoid breaking application.
            pass


def main():
    # Keys to talk to Twitter
    # Removes extra \n at the end of each line read from the secrets.txt file
    f = open('secrets.txt', 'r')
    consumer_key = f.readline().strip()
    consumer_secret = f.readline().strip()

    access_token_key = f.readline().strip()
    access_token_secret = f.readline().strip()
    f.close()

    try:
        auth1 = tweepy.OAuthHandler(consumer_key, consumer_secret)
        auth1.set_access_token(access_token_key, access_token_secret)
    except:
        print "Authentication error."

    # New York city
    #locArea = [-74,40,-73,41]
    #setTerms = ['hello', 'goodbye', 'goodnight', 'good morning']
    #setTerms = ['hello', 'goodbye', 'goodnight', 'good morning']
    # location for Northampton/Amherst, SE to NW
    # -72.75, 42.25,   -72.4, 42.5   

    # Northampton/Amherst, MA
    #locArea = [-72.75,42.25,-72.4, 42.5]
    #setTerms = ['amherst']

    # Ann Arbor/ Detroit area
    locArea = [-83.93, 42.01, -83.17, 42.34]

    # VirtaLabs
    #setTerms = ['@virtalabs']


    l = StreamListener()
    try:
        streamer = tweepy.Stream(auth=auth1, listener=l)
    except:
        print "error authenticating"

    # This doesn't work to catch authentication problem
    # Reading the code on tweepy, it should.  File a bug report.
    # The filter() function runs a loop, unless asyn=TRUE is passed as argument.
    try:
        #streamer.filter(track = setTerms)#, locations = locArea)
        streamer.filter(locations = locArea)
        #streamer.firehose()
    except:
        print "error setting query."

if __name__ == '__main__':
    main()
