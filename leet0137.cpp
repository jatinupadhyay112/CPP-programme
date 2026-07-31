//137. Single Number II

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size(),i=1;
        sort(nums.begin(),nums.end());
        while(i<(n-1)){
            if(nums[i-1]!=nums[i]&&nums[i]==nums[i+1])
            return nums[i-1];
            else if(nums[i-1]==nums[i]&&nums[i]!=nums[i+1])
            return nums[i+1];

            i=i+3;
        }
        return nums[n-1] ;
    }
};

