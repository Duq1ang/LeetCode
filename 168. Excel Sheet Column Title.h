#ifndef 168__EXCEL_SHEET_COLUMN_TITLE_H_INCLUDED
#define 168__EXCEL_SHEET_COLUMN_TITLE_H_INCLUDED
class Solution {
public:
    string convertToTitle(int n) {
        string result;
        while(n)
        {
            result = (char)((n-1)%26+'A') + result;
            n = (n-1)/26;
        }
        return result;
    }
};

#endif // 168__EXCEL_SHEET_COLUMN_TITLE_H_INCLUDED
