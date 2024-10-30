class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int rst = 0;
        for (auto num : nums)
        {
            if (num % 3 != 0) rst++;
        }
        return rst;
    }
};