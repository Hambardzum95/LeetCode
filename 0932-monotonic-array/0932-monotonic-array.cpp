class Solution {
public:
    bool isMonotonic(vector<int>& nums)
    {
        int a = 0, b = 0;
        int i = 0;
        while(i < nums.size() - 1)
        {
            if(nums[i] <= nums[i+1])
            {
                ++a;
            }
            if(nums[i] >= nums[i+1])
            {
                ++b;
            }
            ++i;
        }
        if(a == nums.size() - 1 || b == nums.size() - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
        return 0;
    }
};