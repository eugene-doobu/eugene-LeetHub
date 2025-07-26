class Solution {
public:
    int maxSum(vector<int>& nums) {
        int rst = 0, mx = -0x3f3f3f3f;
        set<int> setVals;
        for (int val : nums) {
            mx = max(mx, val);
            if (val <= 0)
                continue;
            if (setVals.contains(val))
                continue;
            setVals.insert(val);
            rst += val;
        }
        if (rst == 0)
            return mx;
        return rst;
    }
};