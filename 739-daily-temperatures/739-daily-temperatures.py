class Solution:
    def dailyTemperatures(self, T: List[int]) -> List[int]:
        stack = []
        result = [0] * len(T)
        for idx, value in enumerate(T):
          #print(T[idx] , T[idx-1])
            while stack:
              if T[idx] > T[stack[-1]]:
                #print(stack[-1], idx)
                place = stack.pop()
                result[place] = (idx - place)
              else:
                break
            stack.append(idx)
        return result