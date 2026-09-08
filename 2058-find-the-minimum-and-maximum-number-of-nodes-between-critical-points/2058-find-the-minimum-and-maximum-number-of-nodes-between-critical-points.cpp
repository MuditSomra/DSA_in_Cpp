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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        pair<char, char> p;
        ListNode * trav = head;
        vector<int> ans;
        int index = 0;
        while(trav->next!=nullptr){
            
            if(trav->val < trav->next->val){
                p.second = 's';
            }
            else if(trav->val > trav->next->val){
                p.second = 'g';
            }
            else{
                p.second = 'e';
            }
            if( (p.first=='s' && p.second=='g') || (p.first=='g' && p.second=='s') ){
                ans.push_back(index);
            }
            trav = trav->next;
            p.first = p.second;
            index++;
        }
        for(int x: ans){
            cout<<x<<" ";
        }
        if(ans.size()<=1){
            return {-1,-1};
        }
        int max = ans[ans.size()-1]-ans[0];
        int min = INT_MAX;
        for(int i = ans.size()-1; i>0; i--){
            ans[i] = ans[i]-ans[i-1];
            if(ans[i]<min){
                min = ans[i];
            }
        }
        // int min = ans[ans.size()-1]-ans[ans.size()-2];
        vector<int> fans;
        fans.push_back(min);
        fans.push_back(max);

        return fans;
    }
};