189. Rotate Array

bruteforce 



better optimal

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int i,j,r=n-k;
        vector<int> arr(k);
        for(i=0;i<k;i++){
            arr[i]=nums[r];
            r++;
        }
        i=n-k-1;
        j=n-1;
        while(i>=0){
            nums[j]=nums[i];
            i--;
            j--;
        }
        for(i=0;i<k;i++)
            nums[i]=arr[i];
    }
};