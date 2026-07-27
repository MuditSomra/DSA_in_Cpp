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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr){
            return {};
        }
        vector<pair<TreeNode*,int>> pre;
        queue<pair<TreeNode *,int>> st;
        st.push({root,1});
        // int level = 2;
        while(!st.empty()){
            pair<TreeNode*,int> temp = st.front();
            st.pop();
            pre.push_back(temp);
            if(temp.first->left!=nullptr){
                st.push({temp.first->left, temp.second + 1});
            }
            if(temp.first->right!=nullptr){
                st.push({temp.first->right, temp.second + 1});
            }
        }
        int maxlvl = pre[pre.size()-1].second;
        vector<vector<int>> ans(maxlvl+1);
        for(pair<TreeNode *,int> temp: pre){
            // cout<<temp.first->val<<" this is val and level is "<<temp.second<<endl;
            ans[temp.second].push_back(temp.first->val);
        }
        for(int i = 2; i <= maxlvl; i+=2){
            reverse(ans[i].begin(), ans[i].end());
        }
        // for(vector<int> x: ans){
        //     for(int y: x){
        //         cout<<y<<" ";
        //     }
        //     cout<<endl;
        // }
        ans.erase(ans.begin());
        return ans;
    }
};