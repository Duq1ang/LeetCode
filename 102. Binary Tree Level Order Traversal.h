#ifndef 102__BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H_INCLUDED
#define 102__BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H_INCLUDED

class Solution {
public:
    vector<vector<int>>result;
    void installvector(TreeNode *root,int depth){
        if(root==NULL)
           return;
        if(result.size()==depth)
           result.push_back(vector<int>());
        result[depth].push_back(root->val);

        installvector(root->left,depth+1);
        installvector(root->right,depth+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        installvector(root,0);
        return result;
    }
};


#endif // 102__BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H_INCLUDED
