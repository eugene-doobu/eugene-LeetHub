class Solution {
public:
int countHillValley(vector<int>& nums) {
    int up = 0, down = 0, r = 0, n = nums.size();
    for (int i=1; i < n; ++i)
    {
        if (nums[i] > nums[i - 1])
        {
            up = 1;
            if (down) { r++; down = 0; }
        }
        else if (nums[i] < nums[i - 1])
        {
            down = 1;
            if (up) { r++; up = 0; }
        }
    }
    return r;
}
};