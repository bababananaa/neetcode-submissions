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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;
        int count=0;
        int listSize=0;
        ListNode* p1=&dummy;
        ListNode* p2=&dummy;
        for(int i=0;i<=n;++i){
            p1=p1->next;
        }
        while(p1!=nullptr){
            p1=p1->next;
            p2=p2->next;
        }
        if (p1==nullptr)  {
            p2->next=p2->next->next;
        } 
        while(p2!=nullptr){
            p2=p2->next;
        }
        return dummy.next;

       
    }
};
