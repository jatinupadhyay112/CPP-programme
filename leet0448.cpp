//448. Find All Numbers Disappeared in an Array

//bruteforce (but tle)

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n=nums.size(),i=1,j=0;
    vector<int>ans;
    while(i<=n){
        for(j=0;j<n;j++){
            if(nums[j]==i)
            break;
        }
        if(j==n)
        ans.push_back(i);
        i++;
        }
        return ans;
    }
};

//optimal

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n=nums.size();
    vector<int>ans;
    for(int x:nums){
        if(nums[abs(x)-1]>0)
        nums[abs(x)-1]=(-1)*nums[abs(x)-1];
    }
    for(int i=0;i<n;i++){
        if(nums[i]>0)
        ans.push_back(i+1);
    }
    return ans;
    }
};