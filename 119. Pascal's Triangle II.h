#ifndef 119__PASCAL'S_TRIANGLE_II_H_INCLUDED
#define 119__PASCAL'S_TRIANGLE_II_H_INCLUDED


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>result;
        vector<int>flag;
        for(int i=0;i<=rowIndex;i++){
            for(int j=0;j<=i;j++){
                if(j==0||j==i)
                   flag.push_back(1);
                else
                   flag.push_back(result[j-1]+result[j]);
            }
            result.assign(flag.begin(),flag.end());
            flag.clear();
        }
        return result;
    }
};
#endif // 119__PASCAL'S_TRIANGLE_II_H_INCLUDED
