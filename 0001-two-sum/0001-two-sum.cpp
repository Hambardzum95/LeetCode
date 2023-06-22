class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int>a;
        int i = 0;
        while(i < nums.size())
        {
            int j = i+1;
            while(j < nums.size())
            {
                if(nums[j] == target - nums[i])
                {
                    a.push_back(i);
                    a.push_back(j);
                }
                ++j;
            }
            ++i;
        }
        return a;
    }
};