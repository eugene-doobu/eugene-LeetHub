class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int> bannedSet;
        for (int bannedValue : banned)
        {
            bannedSet.insert(bannedValue);
        }
        int output = 0;
        int sumValues = 0;
        for(int i=1; i <=n; ++i)
        {
            if (bannedSet.count(i))
                continue;

            if (sumValues + i > maxSum)
                break;

            output++;
            sumValues += i;
        }

        return output;
    }
};