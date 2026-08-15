//26. Remove Duplicates from Sorted Array

//bruteforce 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==100){
                count=count+1;
                break;
            }
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j])
                    nums[j]=100;
            }
        }
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n&&nums[i]<100;i++)
            count++;
        return count;
    }
};

// better solution (optimal)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),a=nums[0],count=1;
        for(int i=1;i<n;i++){
            if(nums[i]==a){
                nums[i]=100;
            }
            else{
            a=nums[i];
            count++;
            }
        }
        sort(nums.begin(),nums.end());
        return count;
    }
};

//best solution (optimistic)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),i=1,j=1;
        while(i<n){
            if(nums[i-1]!=nums[i]){
                nums[j]=nums[i];
                j++;
                i++;
            }
            else if(nums[i-1]==nums[i]){
                i++;
            }
        }
        return j;
    }
};