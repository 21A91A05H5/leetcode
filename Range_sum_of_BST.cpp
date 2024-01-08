//Range Sum of BST
//Given the root node of a binary search tree and two integers low and high, 
//return the sum of values of all nodes with a value in the inclusive range [low, high].
class Solution {
public:
    int c=0;
    void fun(TreeNode *root,int low,int high){
        if(root==NULL)return ;
        rangeSumBST(root->left,low,high);
        if(root->val>=low and root->val<=high) c+=root->val;
        rangeSumBST(root->right,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        fun(root,low,high);
        return c;
    }
};
