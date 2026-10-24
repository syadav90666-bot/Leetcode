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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return NULL;
        //if->right!=NULL){(root->left!= NULL && root
        swap(root->left,root->right);
            ////if(root->left==NULL || root->right==NULL)
               // return nullptr;
        
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};