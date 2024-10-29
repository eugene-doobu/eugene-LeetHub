class Solution {
public:
    int scoreOfString(string s) {
        auto len = s.length() - 1;
        auto rst = 0;
        for(int i=0; i < len; ++i)
            rst += abs(s[i] - s[i + 1]);
        return rst;
    }
};