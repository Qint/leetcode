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
    int rob(TreeNode* root) {
        int valRobCur = 0;
        int valNotRobCur = 0;
        if(root == NULL)
            return 0;
        valRobCur += root->val;
        if(root->left != NULL) {
            valRobCur += rob(root->left->left);
            valRobCur += rob(root->left->right);

            valNotRobCur += rob(root->left);
        }

        if(root->right != NULL) {
            valRobCur += rob(root->right->left);
            valRobCur += rob(root->right->right);

            valNotRobCur += rob(root->right);
        }

        return valRobCur > valNotRobCur ? valRobCur : valNotRobCur;
    }
};
