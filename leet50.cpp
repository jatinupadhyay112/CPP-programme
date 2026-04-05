50. Pow(x, n)

bruteforce (but TLE)

class Solution {
public:
    double myPow(double x, int n) {
        double res=1;
        if(x==0)
            return 0;
        if(n==0)
            return 1;
        if(n>0){
            while(n!=0){
                res=res*x;
                n--;
            }
        }
        else{
            n=abs(n);
            while(n!=0){
                res=res*x;
                n--;
            }
            res=1/res;
        }
        return res;
    }
};