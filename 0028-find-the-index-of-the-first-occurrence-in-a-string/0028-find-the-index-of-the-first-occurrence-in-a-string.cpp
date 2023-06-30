class Solution {
public:
    int strStr(string haystack, string needle)
    {
       int i = 0;
       while(i < haystack.length())
       {
           if(!haystack.compare(i, needle.length(),needle))
           {
               return i;
           }
           ++i;
       }
       return -1;
    }
};