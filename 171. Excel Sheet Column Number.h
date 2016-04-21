#ifndef 171__EXCEL_SHEET_COLUMN_NUMBER_H_INCLUDED
#define 171__EXCEL_SHEET_COLUMN_NUMBER_H_INCLUDED
class Solution {
public:
    int titleToNumber(string s) {
        int len = s.length();
        int Pow=0;
        int result=0;
        for(int i=len -1;i>=0;i--){
            result += (s[i]-'A'+1)*pow(26,Pow);
            ++Pow;
        }
        return result;
    }
};


#endif // 171__EXCEL_SHEET_COLUMN_NUMBER_H_INCLUDED
