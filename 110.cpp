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
    int depth(TreeNode* root) {
        if (!root) {
           return 0;
       } else {
            return max(depth(root->right), depth(root->left)) + 1;
        }
    }
    
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }else {
                return abs(depth(root->right) - depth(root->left)) <= 1 && isBalanced(root->right) && isBalanced(root->left);
            }
        }
};






