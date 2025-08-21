class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> h(m, vector<int>(n, 0));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == 1) {
                    h[i][j] = (j == 0) ? 1 : h[i][j - 1] + 1;
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == 0) {
                    continue;
                }

                int min_width = h[i][j];
                for (int k = i; k >= 0; --k) {
                    min_width = min(min_width, h[k][j]);
                    if (min_width == 0) {
                        break;
                    }
                    ans += min_width;
                }
            }
        }
        return ans;
    }
};