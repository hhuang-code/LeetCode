/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (root->val < L) {
            if (root->right == NULL) {
                return NULL;
            } else {
                root = trimBST(root->right, L, R);
            }
        } else if (root->val > R) {
            if (root->left == NULL) {
                return NULL;
            } else {
                root = trimBST(root->left, L, R);
            }
        } else {
            if (root->left != NULL) {
                root->left = trimBST(root->left, L, R);
            }
            if (root->right != NULL) {
                root->right = trimBST(root->right, L, R);
            }
        }
        
        return root;
    }
};
