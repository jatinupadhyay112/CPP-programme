283. Move Zeroes

bruteforce 

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int till=nums.size()-1;
        for(int i=0;i<till;i++){
            if(nums[i]==0){
                for(int j=i;j<till;j++){
                    int temp =nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
                till--;
            }
            if(nums[i]==0)
                i--;
        }
    }
};

optimised 

