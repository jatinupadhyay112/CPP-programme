1281. Subtract the Product and Sum of Digits of an Integer


class Solution {
public:
    int subtractProductAndSum(int n) {
        int a,prod=1,sum=0;
        while(n!=0){
            a=n%10;
            sum=sum+a;
            prod=prod*a;
            n=n/10;
        }
        return prod-sum;
    }
        
    
};