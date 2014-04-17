import tweepy
api = tweepy.API()

query_string = "#amherst"

for tweet in tweepy.Cursor(api.search,
                           q=query_string,
                           rpp=1,
                           result_type="recent",
                           include_entities=True,
                           lang="en").items():
    print tweet.created_at, tweet.text
