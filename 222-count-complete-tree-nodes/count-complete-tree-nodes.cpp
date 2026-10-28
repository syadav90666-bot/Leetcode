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
    int getLeftNode(TreeNode* root){
        TreeNode* temp=root;
        int lh=0;
        while(temp){
            temp=temp->left;
            lh++;
        }
        return lh;
    }
     int getRightNode(TreeNode* root){
        TreeNode* temp=root;
        int lh=0;
        while(temp){
            temp=temp->right;
            lh++;
        }
        return lh;
    }
    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        int left = getLeftNode(root) ;
        int right = getRightNode(root) ;
        if(left == right)
            return pow(2,left)-1;
        
        return countNodes(root->left) + countNodes(root->right)+1;
    }
};