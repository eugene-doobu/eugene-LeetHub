class Solution {
private:
    int maxOR, n, ans;
    void solve(int i, int masked, vector<int>& nums){
        if (i >= n){
            if (masked == maxOR) ans++;
            return;
        }
        solve(i+1, masked, nums);
        solve(i+1, masked | nums[i], nums);
    }

public:
    int countMaxOrSubsets(vector<int>& nums) {
        n = nums.size();
        for(const int& num : nums) maxOR |= num;
        solve(0, 0, nums);
        return ans;
    }
};