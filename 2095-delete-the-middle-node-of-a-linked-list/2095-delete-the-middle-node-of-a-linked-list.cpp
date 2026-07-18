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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * trav = head;
        int count = 0;
        while(trav!=nullptr){
            count++;
            trav = trav->next;
        }
        // cout<<count<<" before "<<endl;
        count = count / 2;
        // cout<<count<<endl;
        trav = head;
        for(int i = 0; i < count-1;i++){
            trav = trav->next;
        }

        if(count==0){
            // cout<<" if condition "<<endl;
            return nullptr;
        }
        else if(count==1){
            // cout<<" else if condition "<<endl;
             head->next = head->next->next;
        }
        else{
            // cout<<" else condition "<<endl;
             trav->next = trav->next->next;
        }
        return head;

    }
};