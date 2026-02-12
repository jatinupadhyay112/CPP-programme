167. Two Sum II - Input Array Is Sorted

brute force but tle


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (numbers[i] + numbers[j] == target) {
                    return {i + 1, j + 1};
                }
            }
        }
        return {};
    }
};

optimised 

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size=numbers.size();
        int i=0,j=size-1;
        while (j>i){
            if(numbers[i]+numbers[j]==target)
                return{i+1,j+1};
            else if (numbers[i]+numbers[j]>target)
                j--;
            else
                i++;
        }
        return{};
    }
};