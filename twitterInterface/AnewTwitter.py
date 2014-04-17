from calculation import *

class AnewFace(Face):

	def __init__(self):
		self.stream = tweetFilter('SentimentTest', 'passwd')
		self.tweet = None
	
	def idleFunc(self):
		#try:
			newTweet = self.stream.next()
			self.tweet = getAnewSentiment(newTweet)
			if self.tweet != None:
				print self.tweet, self.tweet[0]['valence']
		#except Exception as e:
			#print(e)
			return
		#print(self.tweet)


			#eye = self.tweet[0]['arousal']*10
			#mouth = (self.tweet[0]['valence']-5)/10
	
if __name__ == "__main__":
	AnewFace().main()
