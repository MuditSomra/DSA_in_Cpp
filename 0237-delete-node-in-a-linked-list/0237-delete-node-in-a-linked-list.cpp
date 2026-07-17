/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode * trav = node;
        while(trav->next->next!=nullptr){
            trav->val = trav->next->val;
            trav = trav->next;
        }
            trav->val = trav->next->val;
            trav->next = nullptr;
            trav = trav->next;
        delete trav;
    }
};