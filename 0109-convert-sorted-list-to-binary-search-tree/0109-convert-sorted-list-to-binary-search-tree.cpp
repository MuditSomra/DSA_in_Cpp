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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    TreeNode * recur(vector<int> & arr, int l, int r){
        if(l>r){
            return nullptr;
        }

        int m = l + (r - l)/2;
        TreeNode * root = new TreeNode(arr[m]);
        root->left = recur(arr, l, m-1);
        root->right = recur(arr, m+1, r);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> arr;
        ListNode * trav = head;
        while( trav!=nullptr){
            arr.push_back(trav->val);
            trav = trav->next;
        }
        int l = 0;
        int r = arr.size()-1;

        TreeNode * root = recur(arr, l, r);
        return root;
    }
};