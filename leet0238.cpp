//bruteforce (but tle)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int pro=1;
            for(int j=0;j<n;j++){
                if(i!=j)
                    pro=pro*nums[j];
            }
            ans.push_back(pro);
        }
        return ans;
    }
};

//optimal 

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),pre=1,suf=1;
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(pre);
            pre=pre*nums[i];
        }
        for(int i=n-1;i>-1;i--){
            ans[i]=ans[i]*suf;
            suf=suf*nums[i];
        }
        return ans;
    }
};