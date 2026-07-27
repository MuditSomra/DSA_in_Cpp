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
    int pathSum(TreeNode * root, int &maximum){

        if(root == nullptr){
            return 0;
        }
        int lf = pathSum(root->left, maximum);
        int rh = pathSum(root->right, maximum);
        // if((lf+rh)>maximum){
        // cout<<maximum<<" maximum updating and node is "<<root->val<<" and lf is"<<lf<<" and rh is "<<rh<<endl;
        // }
        lf = max(0,lf);
        rh = max(0,rh);

        maximum = max(maximum, lf+rh+root->val);
        // if((lf+rh)<0){
        //     maximum = max(root->val, maximum);
        // }
        // else{
        // maximum = max((lf+rh+root->val),maximum);
        // }
        // cout<<"updated max "<<maximum<<endl;
        return (root->val + max(0,max(lf,rh)));
    }

    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        pathSum(root, maxi);
        return maxi;
    }
};