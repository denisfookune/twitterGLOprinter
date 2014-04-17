# Calculates the ANEW scores (valence and arousal) from text strings.

import enchant, re, math
from pickle import Unpickler
from nltk.stem.wordnet import WordNetLemmatizer
import string


# Stuff needed by the ANEW calculations
anew = Unpickler(file('anew.pickle','r')).load()
d = enchant.Dict("en_US")
lmtzr = WordNetLemmatizer()


# Functions for the ANEW calculations
# def tweetFilter(uname, psswd):
# 	stream = tweetstream.SampleStream(uname, psswd)
		
# 	for tweet in stream:
# 		if 'user' in tweet.keys() and tweet['user']['lang'] == 'en':
# 			yield tweet
			
def correctWord(word):
	sug = d.suggest(word)
	if len(sug) <= 0:
		return word
	else:
		return d.suggest(word)[0]
	
def calcSentiment(agg):		
	valence = 0
	valenceNorm = []
	valenceSum = 0
	valenceSD = 0
	arousal = 0
	arousalNorm = []
	arousalSum = 0
	arousalSD = 0
        dominance = 0
	dominanceNorm = []
	dominanceSum = 0
	dominanceSD = 0
	wordFreq = 0

	# print "Number of processed words:", len(agg)
	for word in agg:
		#print "Accumulating word", word
		wordFreq += word['word-freq']
		v = (1/math.sqrt(2*math.pi*math.pow(word['valence-SD'],2)))
		valenceSum += v
		valenceNorm.append((v,word['valence-mean']))
		valenceSD += word['valence-SD']
		a = (1/math.sqrt(2*math.pi*math.pow(word['arousal-SD'],2)))
		arousalSum += a
		arousalNorm.append((a,word['arousal-mean']))
		arousalSD += word['arousal-SD']


		domin = (1/math.sqrt(2*math.pi*math.pow(word['dominance-SD'],2)))
		dominanceSum += domin
		dominanceNorm.append((domin,word['dominance-mean']))
		dominanceSD += word['dominance-SD']
	
	for v in valenceNorm:
		#print "valenceSum:", valenceSum
		valence += (v[0]/valenceSum)*v[1]
	
	for a in arousalNorm:
		#print "arousalSum:", arousalSum
		arousal += (a[0]/arousalSum)*a[1]

	for domin in dominanceNorm:
		#print "dominanceSum:", dominanceSum
		dominance += (domin[0]/dominanceSum)*domin[1]
		
	#print "Valence:", valence ," Arousal:", arousal ," Dominance:",dominance 
	return {'valence':valence, 'arousal':arousal, 'dominance':dominance}


        # TODO:  Something's buggy in the following line, with the standard deviations
	#return {'valence':valence, 'valence-SD':valenceSD, 'arousal':arousal, 'arousal-SD':arousalSD, 'word-freq':wordFreq, 'dominance':dominance,'dominance-SD':dominance-SD}

			
def normTweet(tweetText):

	# Grabs the text in the tweet
	text = tweetText
	# if 'text' in tweet.keys():
	# 	text = tweet['text']
	# else:
	# 	return None
		
	# Removes unnecessary stuff, an brings all to lowercase
	# Makes it easier to lookup in the ANEW dictionary
	exclude = set(string.punctuation)
	exclude.difference_update(set(['\'', '\"']))
	stripped = ''.join(ch for ch in text if ch not in exclude)	
	words = re.findall('[a-z\'\"]+', stripped.lower())
	#words = stripped.lower().split(" ")


	# Prepares the formatted text to be returned.
	english = 0;
	agg = []
	
	for word in words:	
		# The words have to be of a minimum length to be in the dictionary
		if len(word) > 2:
			replace = ''
			#print("considering word: ")
			#print(word)

			# Does the word exist in the dictionary?
			if d.check(word):
				english += 1
				replace = word
				#print("good word")
				#print(replace)
			else:
				# We try to correct it
				replace = correctWord(word)
				#print("bad word.  Attempting correction")
				#print(replace)
				if d.check(replace):
					# We found an acceptable substitution.
					# Update the original string
					text = text.replace(word, replace)

			try:
				stem = lmtzr.lemmatize(replace)
				agg.append(stem)
			except:
				print("could not lemmatize.  Skipping word")
				print(replace)
		
	#tweet['text'] = text
	if english >= 2:
		#return (tweet, agg)
		return (text, agg)
	else:
		return (None, agg)
				


# Calculates the ANEW scores from text
# Generalized so that it could be used or tweets or other things.
def getAnewSentiment(tweetText):

	# "Normalizes" the text from the Tweet
	#print 'normalizing text' + tweetText
	normText, stems = normTweet(tweetText)
	agg = []
	
	if normText:
		for stem in stems:
			if stem in anew.keys():
				agg.append(anew[stem])
		#print(len(agg))
		if len(agg) >= 2:
			sentiment = calcSentiment(agg)
			#print(tweetText)
			#print "Sentiment:", sentiment
			return (sentiment)
		else:
			return None
	else:
		return None
	
