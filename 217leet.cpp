217. Contains Duplicate

bruteforce

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size=nums.size();
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if(nums[i]==nums[j])
                    return 1;
                
            }
        }
        return 0;
    }
};

optimised 

