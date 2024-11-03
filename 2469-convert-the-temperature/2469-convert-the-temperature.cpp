class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> rst;
        rst.push_back(celsius + 273.15);
        rst.push_back(celsius * 1.80 + 32);
        return rst;
    }
};