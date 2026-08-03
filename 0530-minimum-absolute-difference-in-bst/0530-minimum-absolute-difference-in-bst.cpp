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
    void preorder(TreeNode * root, vector<int> &ans){
        if(root==nullptr){
            return;
        }
        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right, ans);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        preorder(root, ans);
        sort(ans.begin(),ans.end());
        int minDiff = INT_MAX;
        for(int i = 0; i < ans.size()-1; i++){
            int diff = ans[i+1]-ans[i];
            minDiff = min(diff, minDiff);

        }
        return minDiff;
    }
};