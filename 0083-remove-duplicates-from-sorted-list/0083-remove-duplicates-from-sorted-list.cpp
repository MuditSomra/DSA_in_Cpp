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
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode * trav = head;
       if(head==nullptr){
        return head;
       }
       while(trav->next!=nullptr){
        while(trav->val == trav->next->val && trav->next->next!=nullptr){
            trav->next = trav->next->next;
        }
        if(trav->val == trav->next->val && trav->next->next==nullptr){
            trav->next = nullptr;
            break;
        }
        trav= trav->next;
       } 
       return head;
    }
};