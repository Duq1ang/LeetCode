#ifndef 104__MAXIMUM_DEPTH_OF_BINARY_TREE_H_INCLUDED
#define 104__MAXIMUM_DEPTH_OF_BINARY_TREE_H_INCLUDED
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
          return 0;
        else
            return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
};


#endif // 104__MAXIMUM_DEPTH_OF_BINARY_TREE_H_INCLUDED
