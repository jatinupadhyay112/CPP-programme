//27. Remove Element

//bruteforce

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0,j=n-1;
        if(n==0)
        return 0;
        else if(n==1 && nums[0]==val)
        return 0;
        else if(n==1 && nums[0]!=val)
        return 1;
        while(i<=j&& j>0){
            while(nums[j]==val){
                j--;
                if(j<0){
                    return 0;
                }
            }
            if(i>j){
                break;
            }
            if(nums[i]==val){
                swap(nums[i],nums[j]);
                j--;
            }
            i++;
        }
        return i;
    }
};
