//977. Squares of a Sorted Array

//bruteforce 

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};

//optimal

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n);
        int i=0,j=n-1,k=n-1;
        while(i<=j){
            if(abs(nums[i])<=abs(nums[j])){
                a[k]=nums[j]*nums[j];
                j--;
                k--;
            }
            else{
                a[k]=nums[i]*nums[i];
                i++;
                k--;
            }
        }
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
      return a;
    }
};