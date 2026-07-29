//9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        long sum=0,a=x;
        while(x!=0){
            sum=sum*10+(x%10);
            x=x/10;
        }
        
        if(abs(a)==sum)
        return 1;
        else 
        return 0;
    }
};