class Solution {
private:
    vector<vector<int>> rst;

public:
    vector<vector<int>> permute(vector<int>& nums) {
        RecurPermutations(nums, 0, nums.size() - 1);
        return rst;
    }

private:
    void RecurPermutations(vector<int>& nums, int left, int right)
    {
        if (left == right)
        {
            auto tmpVec = vector<int>();
            for (int i = 0; i <= right; i++)
                tmpVec.push_back(nums[i]);
            rst.push_back(tmpVec);
        }
        else
        {
            for (int i = left; i <= right; ++i) {
                swap(nums[left], nums[i]);
                RecurPermutations(nums, left + 1, right);
                swap(nums[left], nums[i]);
            }
        }
    }
};