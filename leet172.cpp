172. Factorial Trailing Zeroes

bruteforce 

class Solution {
public:
    int trailingZeroes(int n) {
        int fact=1;
        int count=0;
        for (int i=1;i<=n;i++){
            fact=fact *i;
        }
        while(fact){
            if(fact%10==0){
                count++;
                fact=fact/10;
            }
            else
                return count;
        }
        return count;
    }
};