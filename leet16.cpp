16. 3Sum Closest

bruteforce 

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum,closum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                for(int k=j+1;k<nums.size();k++){
                    if(i!=j&&j!=k&&i!=k){
                        sum=nums[i]+nums[j]+nums[k];
                        if(abs(closum-target)>abs(sum-target))
                            closum=sum;
                    }
                }
            }
        }
        return closum;
    }
};


optimize 


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum,closum=nums[0]+nums[1]+nums[2];
        sort (nums.begin(), nums.end()); 
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(abs(closum-target)>abs(sum-target))
                    closum=sum;
                if(sum<target)
                    j++;
                else if(sum>target)
                    k--;
                else
                    return target;
            }
    }
        return closum;
    }
};