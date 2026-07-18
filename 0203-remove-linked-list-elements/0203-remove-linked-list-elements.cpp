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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * trav = head;
        ListNode * prev = nullptr;
        ListNode * dummy = new ListNode(0, head);
        prev = dummy;
        while(trav!=nullptr){
            if(trav->val==val){
                prev->next = trav->next;
            }
            else{
                prev = trav;
            }
            trav = trav->next;
        }
        return dummy->next;
        
    }
};