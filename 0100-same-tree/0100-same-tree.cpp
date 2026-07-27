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
        // stack<TreeNode *> st;
        // st.push(root);
        // vector<int> ans;
        // while(!st.empty()){
        //     TreeNode * temp = st.top();
        //     st.pop();
        //     ans.push_back(temp->val);
        //     if(temp->right){
        //         st.push(temp->right);
        //     }
            
        //     if(temp->left){
        //         st.push(temp->left);
        //     }
            
        // }
        if(root == nullptr){
            ans.push_back(INT_MIN);
            return;
        }
        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
        // return ans;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> ans1;
        preorder(p, ans1);
        vector<int> ans2;
        preorder(q,ans2);
        if(ans1.size()!=ans2.size()){
            return false;
        }
        for(int i = 0; i < ans1.size(); i++){
            if(ans1[i]!=ans2[i]){
                return false;
            }

        }
        return true;
        
    }
};