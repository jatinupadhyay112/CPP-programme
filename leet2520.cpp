2520. Count the Digits That Divide a Number

bruteforce 

class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int a=num;
        while(a){
            if(num%(a%10)==0)
                count++;
            a=a/10;
        }
        return count;
    }
};