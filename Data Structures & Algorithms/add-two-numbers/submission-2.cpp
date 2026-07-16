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
        //case1 numbers do not go greater than 9
        //find
        int s;
        ListNode res(0);
        ListNode* tail=&res;
        int carry=0;
        while(l2!=nullptr||l1!=nullptr||carry!=0){
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            //used chat :()
            int sum = x + y + carry;
            carry = sum / 10; 
            int digit = sum % 10;
            //tail->next = new ListNode(digit);
            tail->next=new ListNode(digit);
            tail=tail->next;
            if (l1 != nullptr) {
                l1 = l1->next;
            }
            if (l2 != nullptr){
             l2 = l2->next;
            }
        }
        return res.next;
        
    }
};
