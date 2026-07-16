//bruteforce

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0)
            even.push_back(nums[i]);
            else
            odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        int k=even.size();
        for(int i=0;i<n;i++){
            if(i<k)
            nums[i]=even[i];
            else
            nums[i]=odd[i-k];
        }
        return nums;
    }   
};

//optimal but wrong answer

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size(),i=0,j=n-1;
        while(i<j){
            if(nums[i]%2==0){
                i++;
                continue;
            }
            if(nums[j]%2!=0){
                j--;
                continue;
            }
            if(nums[i]%2!=0&&nums[j]%2==0){
                swap(nums[i],nums[j]);
            }
        }
        return nums;
    }
};