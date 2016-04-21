#ifndef 169__MAJORITY_ELEMENT_H_INCLUDED
#define 169__MAJORITY_ELEMENT_H_INCLUDED
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,pos=0;
        int flag=nums[0];
        sort(nums.begin(),nums.end());
        while(pos<(nums.size()/2+1)){
            if(nums[pos]==flag){
                ++pos;
                ++count;
                if(count>(nums.size()/2))
                    return flag;
            }
            else{
                count==0;
                flag=nums[pos];
            }
        }
        return nums[0];
    }
};


#endif // 169__MAJORITY_ELEMENT_H_INCLUDED
