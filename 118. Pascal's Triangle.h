#ifndef 118__PASCAL'S_TRIANGLE_H_INCLUDED
#define 118__PASCAL'S_TRIANGLE_H_INCLUDED

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>>result;
    for(int i=0;i<numRows;i++){
        result.push_back(vector<int>());
        for(int j=0;j<=i;j++){
            if(j==0||j==i)
               result[i].push_back(1);
            else
               result[i].push_back(result[i-1][j-1]+result[i-1][j]);
        }
    }
    return result;
    }
};
#endif // 118__PASCAL'S_TRIANGLE_H_INCLUDED
