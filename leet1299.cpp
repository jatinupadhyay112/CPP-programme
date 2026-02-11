1299. Replace Elements with Greatest Element on Right Side

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size=arr.size();
        int maj;
        for(int i=0;i<size-1;i++){
            maj=arr[i+1];
            for(int j=i+1;j<size;j++){
                if(arr[j]>=maj)
                    maj=arr[j];
            }
            arr[i]=maj;
        }
        arr[size-1]=-1;
        return arr;
    }
};