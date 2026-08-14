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
    int minDepth(TreeNode* root) {
           if(root==nullptr){
            return 0;
        }
        int lf = minDepth(root->left);
        int rf = minDepth(root->right);
        if(lf==0){
            return 1 + rf;
        }
        else if(rf==0){
            return 1 + lf;
        }
        else{

        return 1 + min(lf, rf);
        }
    }
};