1979. Find Greatest Common Divisor of Array

bruteforce 

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int big=nums[0];
        int small=big;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<small)
                small=nums[i];
            else if(nums[i]>big)
                big=nums[i];
        }
        int i,j;
        for(i=1;i<=small;i++){
            if(small%i==0&&big%i==0){
                j=i;
            }}
        
        return j;
    }
};