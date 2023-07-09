class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr)
    {
        int i = 1;
        sort(arr.begin(),arr.end());
        int tmp = arr[1] - arr[0];
        while(i < arr.size())
        {
            if(arr[i] - arr[i-1] != tmp)
            {
                return false;
            }
            ++i;
        }
        return true;
    }
};