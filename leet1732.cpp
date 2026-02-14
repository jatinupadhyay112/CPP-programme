1732. Find the Highest Altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int size =gain.size();
        int sum=0,max=0;
        for(int i=0;i<size;i++){
            sum=sum+gain[i];
            if(sum>max)
                max=sum;
        }
        return max;
    }
};

