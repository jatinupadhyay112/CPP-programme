//334. Increasing Triplet Subsequence

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

//optimal 

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i=0,sm=INT_MAX,mid=sm,n=nums.size();
        do{
            if(sm>nums[i]){
                sm=nums[i];
                i++;
                continue;
            }

            if(mid>nums[i]&&nums[i]>sm){
                mid=nums[i];
                i++;
                continue;
            }
            if(nums[i]>mid){
                return 1;
            }
            else 
            i++;
        }while(i<n);
        return 0;
    }  
};