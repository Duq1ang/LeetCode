#ifndef 101__SYMMETRIC_TREE_H_INCLUDED
#define 101__SYMMETRIC_TREE_H_INCLUDED

class Solution {
public:
    bool checkSymmetric(TreeNode *left,TreeNode *right){
        if(left==NULL&&right==NULL)
           return true;
        else if((!left&&right)||(left&&!right))
           return false;
        else{
            if(left->val!=right->val)
               return false;
             else
               return checkSymmetric(left->left,right->right)&&checkSymmetric(left->right,right->left);
        }
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
           return true;
        return checkSymmetric(root->left,root->right);

    }
};

#endif // 101__SYMMETRIC_TREE_H_INCLUDED
