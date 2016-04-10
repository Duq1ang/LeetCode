#ifndef 118__PASCAL'S_TRIANGLE_H_INCLUDED
#define 118__PASCAL'S_TRIANGLE_H_INCLUDED

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>>result;
    if(numRows==0)
        return result;
    result.push_back(vector<int>());
    result[0].push_back(1);
    if(numRows==1)
        return result;
    result.push_back(vector<int>());
    result[1].push_back(1);
    result[1].push_back(1);
    if(numRows==2)
        return result;
    for(int i=2;i<numRows;i++){
        result.push_back(vector<int>());
        result[i].push_back(1);
        for(int j=1;j<i;j++){
            int cur=result[i-1][j-1]+result[i-1][j];
            result[i].push_back(cur);
        }
        result[i].push_back(1);
    }
    return result;
    }
};
#endif // 118__PASCAL'S_TRIANGLE_H_INCLUDED
