//260. Single Number III

//Bruteforce solution: O(n^2) time complexity, O(1) space complexity

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size(),i=0,j=i;
        vector<int> ans;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(nums[i]==nums[j]&&i!=j)
                break;
            }
            if(j==n)
            ans.push_back(nums[i]);
        }
        return ans;
    }
};