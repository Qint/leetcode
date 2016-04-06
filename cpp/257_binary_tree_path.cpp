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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> pathStack, result;
        vector<TreeNode*> nodeStack;
        string path;
        TreeNode *index = root;
        if(root == NULL)
            return pathStack;
        nodeStack.push_back(index);
        path = ""+to_string(index->val);
        pathStack.push_back(path);

        while(!nodeStack.empty()) {
            index = nodeStack[nodeStack.size()-1];
            nodeStack.pop_back();

            path = pathStack[pathStack.size()-1];
            pathStack.pop_back();
            if(index->left == NULL && index->right == NULL) {
                result.push_back(path);
                continue;
            }

            if(index->right != NULL) {
                nodeStack.push_back(index->right);
                pathStack.push_back(path+"->" + to_string(index->right->val));
            }
            if(index->left != NULL) {
                nodeStack.push_back(index->left);
                pathStack.push_back(path + "->" + to_string(index->left->val));
            }
        }
        return result;
    }
};



/* more fast solution in c code */
bool isAnagram(char* s, char* t) {
    int len = strlen(s), index;
    int mapArray[26] = {0};
    if(len != strlen(t))
        return false;
    for(index = 0; index < len; index++) {
        mapArray[s[index] - 'a']++;
        mapArray[t[index] - 'a']--;
    }

    for(index = 0; index < 26; index++) {
        if(mapArray[index] != 0) return false;
    }
    return true;
}
