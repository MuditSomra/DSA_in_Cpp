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

    TreeNode * recur(vector<int> & nums, int l, int r){
       
        int m = l + (r - l)/2;
        if(l > r){
            return nullptr;
        }
        TreeNode * root = new TreeNode(nums[m]);
        root->left = recur(nums, l, m-1);
        root->right = recur(nums, m+1, r);
        return root;

    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode * root;
        int left = 0;
        int right = nums.size()-1;
        root = recur(nums, left, right);
        return root;
        // TreeNode * leftPoint = root;
        // TreeNode * rightPoint = root;
        // if(n==2){
        //     root->left = new TreeNode(nums[l]);
        //     return root;
        // }
        // while(l>=0 && r<n){

        //     TreeNode * tempLeft = new TreeNode(nums[l--]);
        //     TreeNode * tempRight = new TreeNode(nums[r++]);
        //     leftPoint->left = tempLeft;
        //     rightPoint->right = tempRight;
        //     leftPoint = tempLeft;
        //     rightPoint = tempRight;


        // }
        // return root;
    }
};