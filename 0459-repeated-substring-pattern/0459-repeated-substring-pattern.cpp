class Solution {
public:
    bool repeatedSubstringPattern(string s)
    {
        size_t n = s.size();
        int i = n / 2;
        while(i >= 1)
        {
            if(n % i == 0)
            {
                if(s.substr(0,n - i) == s.substr(i))
                {
                    return true;
                }
            }
            --i;
        }
        return false;
    }
};