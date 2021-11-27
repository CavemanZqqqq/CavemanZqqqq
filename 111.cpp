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
    int minD(TreeNode* root) {
        if(!root) {
            return 0;
        }
        else if (!(root->right) && !(root->left)) {
            return 1;
        }
        else if (root->right && !(root->left)) {
            return minD(root->right) + 1;
        }
        else if (root->left && !(root->right)) {
            return minD(root->left) + 1;
        }else {
            return min(minD(root->left), minD(root->right)) + 1;
        }
    }
    int minDepth(TreeNode* root) {
        return minD(root);
    }
};
