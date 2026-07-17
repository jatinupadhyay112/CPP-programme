// bruteforce but tle

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),pro, maxp=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                pro=prices[j]-prices[i];
                maxp=max(pro,maxp);
            }
        }
        return maxp;
    }
};

