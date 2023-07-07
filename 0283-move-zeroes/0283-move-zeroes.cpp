class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int n = nums.size();
        int tmp = 0;
        int i = 0;
        while (i < n)
        {
            if(nums[i] !=0)
            {
                int y = nums[i];
                nums[i] = nums[tmp];
                nums[tmp] = y;
                ++tmp;
            }
            ++i;
        }
    }
};