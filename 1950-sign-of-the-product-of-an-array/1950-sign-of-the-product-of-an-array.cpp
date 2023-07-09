class Solution {
public:
    int arraySign(vector<int>& nums)
    {
        int i = 0;
        double tmp = 1;
        while(i < nums.size())
        {

            tmp *= nums[i];
            ++i;
        }
        if(tmp < 0)
        {
            return -1;
        }
        else if (tmp > 0)
        {
            return 1;
        }
        else if (tmp == 0)
        {
            return 0;
        }
        return 0;
    }
};