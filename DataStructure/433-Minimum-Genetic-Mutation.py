from collections import deque
class Solution:
    def minMutation(self, startGene: str, endGene: str, bank: List[str]) -> int:
        if endGene not in bank or endGene == startGene:
            return -1
        
        q = deque()
        seen = set()
        res = 0
        node = (startGene, res)
        seen.add(startGene)
        q.append(node)

        while q:
            mutation, res = q.popleft()
            if mutation == endGene:
                return res
            
            for char in "ACGT":
                for i in range(8):
                    # create the mutations
                    New_Gene = mutation[:i] + char + mutation[i+1:]
                    if New_Gene not in seen and New_Gene in bank:
                        q.append((New_Gene, res + 1))
                        seen.add(New_Gene)
        return -1