//125. Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        string sn;
        for(char c:s){
            c=tolower(c);
            if((c>96&&c<123)||(c>47&&c<58))
            sn.push_back(c);
        }
        int i=0,j=sn.size()-1;
        while(i<j){
            if(sn[i]==sn[j]){
                i++;
                j--;
            }
            else
            return 0;
        }
        return 1;
    }
};