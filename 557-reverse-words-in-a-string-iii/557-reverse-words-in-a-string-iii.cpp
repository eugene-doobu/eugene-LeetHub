class Solution {
public:
    string reverseWords(string s) {
        for (int i = 0; i < s.length(); i++) {
            int j = i;
            while (j < s.length() && s[j] != ' ') ++j;
            int origin = j--;
            while (i < j) swap(s[i++], s[j--]);
            i = origin;
        }
        return s;
    }
};