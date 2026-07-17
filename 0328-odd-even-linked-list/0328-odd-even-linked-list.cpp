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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        else if(head->next == nullptr){
            return head;
        }
        else{
            ListNode * first = head;
            ListNode * second = head->next;
            ListNode * secondTemp = second;
            ListNode * temp1;
            ListNode * temp2;
            while(first->next!=nullptr && first->next->next!=nullptr){
                temp1 = first->next->next;
                temp2  = second->next->next;
                first->next = temp1;
                second->next = temp2;
                first = first->next;
                second = second->next;
            }
            first->next=secondTemp;
        }
        return head;
    }
};