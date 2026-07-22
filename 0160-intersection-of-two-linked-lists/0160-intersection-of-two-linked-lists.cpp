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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map <ListNode *,int> mp;
        ListNode * trav = headA;
        ListNode * trav2 = headB;
        while(trav!=nullptr ){
            mp[trav]++;
            trav = trav->next;
        }
        while(trav2!=nullptr ){
            mp[trav2]++;
            if(mp[trav2]==2){
                return trav2;
            }
            trav2 = trav2->next;
        }
        return nullptr;
    }
};