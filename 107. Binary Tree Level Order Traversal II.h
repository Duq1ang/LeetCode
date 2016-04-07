#ifndef 107__BINARY_TREE_LEVEL_ORDER_TRAVERSAL_II_H_INCLUDED
#define 107__BINARY_TREE_LEVEL_ORDER_TRAVERSAL_II_H_INCLUDED

class Solution {
public:
    vector<vector<int>>result;
    void insVector(TreeNode *root,int depth){
        if(root==NULL)
           return;
        if(result.size()==depth)
           result.push_back(vector<int>());
        result[depth].push_back(root->val);
        insVector(root->left,depth+1);
        insVector(root->right,depth+1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        insVector(root,0);
        return vector<vector<int>>(result.rbegin(),result.rend());
    }
};

#endif // 107__BINARY_TREE_LEVEL_ORDER_TRAVERSAL_II_H_INCLUDED
