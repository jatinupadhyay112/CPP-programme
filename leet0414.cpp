//414. Third Maximum Number

//bruteforce 

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size(),i=n-1,count=1;
        sort(nums.begin(),nums.end());
        for (int i =n-1;i>0;i--){
            if(nums[i]!=nums[i-1]){
                count++;
            }
            if(count ==3)
                return nums[i-1];
        }
        return nums[n-1];
            
    }
};
