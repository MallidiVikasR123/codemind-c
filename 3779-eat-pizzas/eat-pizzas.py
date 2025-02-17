class Solution:
    def maxWeight(self, pizzas: List[int]) -> int:
        l = sorted(pizzas)
        n = len(l)//4
        e = n//2
        n -= e
        s = 0
        i = len(l)-1
        while(e!=0 or n!=0):
            if n!=0:
                s+=l[i]
                n -= 1
            else:
                i-=1
                s+=l[i]
                e-=1
            i-=1
        return s