//bruteforce (but tle)

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]<nums[j]&&nums[j]<nums[k])
                    return 1;
                }
            }
        }
        return 0;
    }
};