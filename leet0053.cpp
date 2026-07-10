//53. Maximum Subarray

//bruteforce(but TLE)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxs=nums[0];
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum=sum+nums[k];
                }
                if(sum>maxs){
                    maxs=sum;
                }
            }
        }
        return maxs;
    }
};