#ifndef 111__MINIMUM_DEPTH_OF_BINARY_TREE_H_INCLUDED
#define 111__MINIMUM_DEPTH_OF_BINARY_TREE_H_INCLUDED

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
          return 0;
        else if(!root->left&&root->right)
          return 1+minDepth(root->right);
        else if(root->left&&!root->right)
          return 1+minDepth(root->left);
        else
          return 1+min(minDepth(root->left),minDepth(root->right));

    }
};


#endif // 111__MINIMUM_DEPTH_OF_BINARY_TREE_H_INCLUDED
