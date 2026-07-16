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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=nullptr;
     
        //iterates through every node until the end
        while(curr!=nullptr){
            ListNode* nextNode = curr->next; // save next node
            curr->next = prev;           // reverse the link (curr points toward preivous)
            prev = curr;                 // move prev forward
            curr = nextNode;             // move curr forward
        }
        //return the start of the end
        return prev;
    }
};
