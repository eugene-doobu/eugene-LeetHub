class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int rst = 0;
        for (auto operation : operations)
        {
            for (auto value : operation)
            {
                if (value == '-')
                {
                    rst--;
                    break;
                }
                if (value == '+')
                {
                    rst++;
                    break;
                }
            }
        }
        return rst;
    }
};