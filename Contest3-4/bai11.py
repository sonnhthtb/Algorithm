# import
import heapq
mod=1000000007
# input
class solution:
    def __init__(self):
        pass
    
    def input(self):
        self.n=int(input())
        self.A=[int(_) for _ in input().split()]

    def call(self):

        heapq.heapify(self.A)
        ans=mod**40 # mod^40
        while len(self.A)>1:    
            top1=heapq.heappop(self.A)
            top2=heapq.heappop(self.A)
            new_top=(top1%mod+top2%mod)%mod
            heapq.heappush(self.A,new_top)
            ans=(ans+new_top)%mod
        print(ans%mod)

        

Solve=solution()

Solve.input()
Solve.call()
