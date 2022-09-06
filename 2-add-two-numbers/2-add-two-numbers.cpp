/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry{0};
        ListNode* ans = new ListNode();
        ListNode* temp =  ans;
        
        while(l1 || l2 || carry){
            int p1 = l1 ? l1->val : 0;
            int p2 = l2 ? l2->val : 0;
            int sum = p1 + p2 + carry;
            
            temp->next = new ListNode(sum % 10);
            carry = sum / 10;
            
            temp = temp->next;
            
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
        }
        
        return ans->next;
    }
};