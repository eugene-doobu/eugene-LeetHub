class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> rst(nums.size());
        for(int i=0; i<nums.size(); i++){
            rst[i] = nums[nums[i]];
        }
        return rst;
    }
};