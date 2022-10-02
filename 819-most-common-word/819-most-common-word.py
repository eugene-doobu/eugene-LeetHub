import operator

class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        paragraph = paragraph.lower().replace('!', ' ').replace('?', ' ').replace('\'', ' ').replace(',', ' ').replace(';', ' ').replace('.', ' ')
        words = paragraph.split(' ')
        wordCountDict = {}
        for word in words:
            if word == '':
                continue
            if word in wordCountDict:
                wordCountDict[word] += 1
            else:
                wordCountDict[word] = 1
        
        sdict= sorted(wordCountDict.items(), key=operator.itemgetter(1))

        banCheker = 1
        for key in wordCountDict:
            for banword in banned:
                if(sdict[len(sdict) - banCheker][0] == banword):
                    banCheker += 1
                    break
                    
        return sdict[len(sdict) - banCheker][0]
            