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

//more optimal (still tle)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxs=nums[0];
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                    sum=sum+nums[j];
                    if(sum>maxs){
                        maxs=sum;
                }
            }
        }
        return maxs;
    }
};

//Best Optimal 

//By Kaden's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),maxs=INT_MIN,sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            maxs=max(sum,maxs);
            if(sum<0)
            sum=0;
        }
        return maxs;
    }
};
