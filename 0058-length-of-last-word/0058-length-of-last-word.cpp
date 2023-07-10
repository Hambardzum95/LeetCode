class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int count = 0;
        int n = s.length();
        int tmp = 0;
        int i = 0;
        while(i < n)
        {
            if(s[i] == ' ')
            {
                if(count != 0)
                {
                    tmp = count;
                }
                count = 0;
            }
            else
            {
                ++count;
            }
            ++i;
        }
        if(count == 0)
        {
            return tmp;
        }
        return count;
    }
};