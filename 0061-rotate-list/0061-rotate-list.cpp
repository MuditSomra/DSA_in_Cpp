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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr){
            return head;
        }
          int size = 0;
          ListNode * temp = head; 
          while(temp!=nullptr){
                size++;
                temp = temp->next;
          }
          k = k % size;
        if(k==0){
            return head;
        }
          temp = head;
          for(int i = 0; i < size-k-1; i++){
            temp = temp->next;
          }
          ListNode * nHd = temp->next;
          temp->next = nullptr;
          ListNode * nend = nHd;
          while(nend->next!=nullptr){
            nend = nend->next;
          }
          nend->next = head;
          return nHd;
    }
};