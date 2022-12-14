# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
from typing import List
import heapq

class Solution:
    def mergeKLists(self, lists: List[ListNode]) -> ListNode:
        pq = []
        for lis in lists:
            while lis:
                heapq.heappush(pq, lis.val)
                lis = lis.next
        
        result = head = ListNode()
        while pq:
            head.next = ListNode()
            head = head.next
            head.val = heapq.heappop(pq)
        
        return result.next