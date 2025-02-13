class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()
        if len(words) != len(pattern):
            return False
        hash_table = {}
        for i, j in zip(words, pattern):
            if j in hash_table:
                if hash_table[j] != i:
                    return False
            else:
                hash_table[j] = i
        if len(set(hash_table.values())) != len(hash_table.keys()):
            return False
        return True