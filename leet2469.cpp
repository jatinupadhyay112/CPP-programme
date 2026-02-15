2469. Convert the Temperature

bruteforce 

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return{(celsius+273.15),((1.8)*celsius)+32};
        
    }
};