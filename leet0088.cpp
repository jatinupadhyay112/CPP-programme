//88. Merge Sorted Array

//bruteforce 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=0;i<m+n;i++){
            if(nums1[i]==0 &&j<n){
                nums1[i]=nums2[j];
                    j++;
                }
            }
        sort(nums1.begin(),nums1.end());
        
    }
};

//optimal 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m!=0){
            int j=m-1,k=n-1,i=m+n-1;
            while(j>=0&&k>=0){
                if(nums1[j]>nums2[k]){
                    nums1[i]=nums1[j];
                    j--;
                    i--;
                }
                else if(nums1[j]<nums2[k]){
                    nums1[i]=nums2[k];
                    k--;
                    i--;
                }
                else{
                    nums1[i]=nums2[k];
                    k--;
                    i--;
                    nums1[i]=nums1[j];
                    j--;
                    i--;
                }
            }
            if(k>-1){
                while(i>-1){
                    nums1[i]=nums2[k];
                    k--;
                    i--;
                }
            }
            else{
                while(i>-1){
                    nums1[i]=nums1[j];
                    j--;
                    i--;
                }
            }
            
        }
        else{
            for(int i=0;i<n;i++){
                nums1[i]=nums2[i];
            }
        }
    }
};
