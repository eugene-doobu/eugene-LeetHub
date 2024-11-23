class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> rst;
        set<int> s;
        for (int i=0; i < nums.size(); ++i)
        {
            if (s.count(nums[i]) > 0)
            {
                rst.push_back(nums[i]);
            }
            else
            {
                s.insert(nums[i]);
            }
        }
        return rst;
    }
};