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
    TreeNode* BST(int right,int left, vector<int>& nums) {
        if (right > left) {
            return nullptr;
        } 
        int mid = right + (left - right)/2;
        TreeNode* t = new TreeNode(nums[mid]);
        t->right = BST(mid + 1, left, nums);
        t->left = BST(right, mid - 1, nums);
        return t;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int right = 0;
        int left = nums.size() - 1;
        return BST(right, left, nums);
    }
};
