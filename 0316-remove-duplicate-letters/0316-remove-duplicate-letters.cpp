class Solution {
public:
    string removeDuplicateLetters(string s) 
    {
        unordered_map<char,int> tmp;
        unordered_map<char,bool> dst;
        string result;
        for(auto &it:s)
        {
            tmp[it]++;
        }
        for(auto &it:s)
        {
            tmp[it]--;
            if(dst[it])
            {
                 continue;
            }  
            while(result.empty()==false  and result.back()>it and tmp[result.back()]>0)
            {
                dst[result.back()]=false;
                result.pop_back();
            }
            dst[it]=true;
            result+=it;
        }
        return result;
    }
};