class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        anagram={}
        for words in strs:
            sorted_words="".join(sorted(words))
            if sorted_words in anagram:
                anagram[sorted_words].append(words)
            else:
                anagram[sorted_words]=[words]
        return list(anagram.values())