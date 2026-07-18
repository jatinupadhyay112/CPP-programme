//bruteforce (but tle)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),max_ar=0,ar;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n;j++){
                ar=(j-i)*min(height[j],height[i]);
                max_ar=max(ar,max_ar);
            }
        }
        return max_ar;
    }
};

//optimal

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),max_ar=0,ar,i=0,j=n-1;
        while(i<j){
            ar=min(height[i],height[j])*(j-i);
            max_ar=max(ar,max_ar);
            if(height[i]<height[j])
            i++;
            else
            j--;
        }
        return max_ar;
    }
};