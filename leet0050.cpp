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

optimal

class Solution {
public:
    double myPow(double x, long long n) {
        double res=1;
        bool sign=0;
        if(x==0)
            return 0;
        if(x==1)
            return 1;
        if(n==0)
            return 1;
        
        if(n<0){
            sign=1;
            n=abs(n);
        }
        while(n>0){
            if(n%2!=0){
                res=res*x;
                x=x*x;
                n=(n-1)/2;
            }
            else {
                x=x*x;
                n=n/2;
            }
        }
        if (sign==0)
            return res;
        else
            return (1/(res));
        
    }   
};

more optimal

class Solution {
public:
    double myPow(double x, long long n) {
        double res=1;
        bool sign=0;
        if(x==0)
            return 0;
        if(n==0)
            return 1;
        
        if(n<0){
            sign=1;
            n=-n;
        }
        while(n>0){
            if(n%2!=0){
                res=res*x;
                x=x*x;
                n=(n-1)/2;
            }
            else {
                x=x*x;
                n=n/2;
            }
        }
        if (sign==0)
            return res;
        else
            return (1/(res));
        
    }   
};