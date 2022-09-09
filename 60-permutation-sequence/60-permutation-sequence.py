class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        lst = list(range(1,n+1))
        rst = ""
        for p in range(n):
            f=int(math.factorial(n-p-1))
            i = (k-1)//f
            k = k % f
            rst+=str(lst[i])
            lst.remove(lst[i])
        return rst
        