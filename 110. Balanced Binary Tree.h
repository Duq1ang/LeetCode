#ifndef 110__BALANCED_BINARY_TREE_H_INCLUDED
#define 110__BALANCED_BINARY_TREE_H_INCLUDED

class Solution {
public:
    int maxDepth(TreeNode *root){
        if(root==NULL)
           return 0;
        else
           return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
           return true;
        else{
            int left_depth=maxDepth(root->left);
            int right_depth=maxDepth(root->right);
            if(left_depth-right_depth>1||left_depth-right_depth<-1)
               return false;
            else
                return isBalanced(root->left)&&isBalanced(root->right);
        }

    }
};

#endif // 110__BALANCED_BINARY_TREE_H_INCLUDED
