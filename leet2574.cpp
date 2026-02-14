2574. Left and Right Sum Differences

bruteforce 

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int i=0,j=1;
        int n=nums.size();
        vector<int>rightsum(n,0);
        vector<int>leftsum(n,0);
        vector<int>answer(n,0);
        for(i=0;i<n-1;i++){
            for (j=i+1;j<n;j++){
                rightsum[i]=rightsum[i]+nums[j];
            }
        }

        for(j=n-1;j>0;j--){
            for(i=j-1;i>=0;i--){
                leftsum[j]=leftsum[j]+nums[i];
            }
        }

        for(int k=0;k<n;k++){
            answer[k]=leftsum[k]-rightsum[k];
            if (answer[k]<0){
                answer[k]=answer[k]*(-1);
            }
        }
        return answer;
    }
};

optimised 

