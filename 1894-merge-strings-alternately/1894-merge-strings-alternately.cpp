class Solution {
public:
    string mergeAlternately(string word1, string word2)
    {
        std :: string final = "";
        int i = 0;
        int j = 0;
        int n = word1.size();
        int t = word2.size();
        while(i < n || j < t)
        {
            if( i < n)
            {
                final.push_back(word1[i++]);
            }
            if(j < t)
            {
                final.push_back(word2[j++]);
            }
        }
        return final;
    }
};