grep Sentiment: $1 | grep -v None | sed s/"Sentiment: {'arousal': "// | sed s/" 'valence': "// | sed s/" 'dominance': "// | sed s/"}"//  | sed s/,/" "/ | sed s/,/" "/ 
