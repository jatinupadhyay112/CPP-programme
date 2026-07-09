26. Remove Duplicates from Sorted Array

bruteforce 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==100){
                count=count+1;
                break;
            }
        }
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j])
                    nums[j]=100;
            }
        }
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()&&nums[i]<100;i++)
            count++;
        return count;
    }
};

optimize 

