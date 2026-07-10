//1. Two Sum

//bruteforce

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if(nums[i]+ nums[j]==target)
                    return{i,j};
            }
        }
    return{};
    }
};


//optimised 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector <pair<int,int>> a;
        int i=0;
        while(i<n){
            a.push_back({nums[i],i});
            i++;
        }
        sort(a.begin(),a.end());
        i=0;
        int j=n-1;
        while(i<j){
            if(a[i].first+a[j].first==target){
                return {a[i].second,a[j].second};
            }
            else if(a[i].first+a[j].first>target){
                j--;
            }
            else if(a[i].first+a[j].first<target){
                i++;
            }
        }

    return {};
    }
};