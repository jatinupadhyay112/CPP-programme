//2652. Sum Multiples

//bruteforce but worst

class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        for (int i=1;i<=n;i++){
            if(i%3==0){
                sum=sum+i;
                continue;}
            
            else if(i%5==0){
                sum=sum+i;
                continue;}
            
            else if(i%7==0){
                sum=sum+i;
                continue;}
            else
                continue;
        }
        return sum;
    }
};

//better code

class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        for(int i=1;i<=n;i++){
            if(i%3==0||i%5==0||i%7==0)
            sum=sum+i;
        }
        return sum;
    }
};