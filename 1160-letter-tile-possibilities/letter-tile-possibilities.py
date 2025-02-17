class Solution:
    def numTilePossibilities(self, s: str) -> int:
        subseq_perms = []
        n = len(s)
        
        # Generate all subsequences
        for i in range(1, n + 1):
            for subseq in combinations(s, i):
                # Permute each subsequence
                for perm in permutations(subseq):
                    subseq_perms.append("".join(perm))
        
        return len(set(subseq_perms))