#ifndef 112__PATH_SUM_H_INCLUDED
#define 112__PATH_SUM_H_INCLUDED

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return false;
        if(root->left==NULL&&root->right==NULL&&root->val==sum)
            return true;
        else{
            return hasPathSum(root->left,sum-root->val)||hasPathSum(root->right,sum-root->val);
        }
    }
};

#endif // 112__PATH_SUM_H_INCLUDED
