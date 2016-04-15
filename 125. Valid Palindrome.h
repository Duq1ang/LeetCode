#ifndef 125__VALID_PALINDROME_H_INCLUDED
#define 125__VALID_PALINDROME_H_INCLUDED
class Solution{
public:
    bool isPalindrome(string s){
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]-('A'-'a');
        }
        stack<char>mystack;
        for(int i=0;i<s.size();i++){
            if((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z'))
                mystack.push(s[i]);
        }
        for(int i=0;i<s.size();i++){
            if((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')){
                if(s[i]!=mystack.top())
                    return false;
                mystack.pop();
            }
        }
        return true;
    }
};
#endif // 125__VALID_PALINDROME_H_INCLUDED
