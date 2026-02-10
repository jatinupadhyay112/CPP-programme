//leatcode 169. Majority Element

class Solution { public: int majorityElement(vector& nums) { int n=nums.size(); for(int i=0;i<n;i++){ int count=0;

        for(int j=0;j<n;j++){
            
            if(nums[i]==nums[j]){
                count++;
            }
            if (count>n/2)
            return nums[i];
            
       
    }
    }
    return -1;
}
};


Optimised

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c =0 ,m;
        for (int i=0;i<n;i++){
            if (c==0){
            m=nums[i];
            }
            if (nums[i]==m)
            c++;
            else c--;
        }
        
        return m;
        
      }
    };