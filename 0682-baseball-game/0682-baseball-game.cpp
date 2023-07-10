class Solution {
public:
    int calPoints(vector<string>& operations)
    {
        vector<int> tmp;
        int i = 0;
        while(i < operations.size())
        {
            if(operations[i] == "+")
            {
                int n =tmp.size();
                tmp.push_back(tmp[n-1] + tmp[n-2]);
            }
            else if(operations[i] == "C")
                tmp.pop_back();
            else if(operations[i] == "D")
                tmp.push_back(2*tmp.back());
            else
                tmp.push_back(stoi(operations[i]));
            ++i;
        }
        return accumulate(tmp.begin(),tmp.end(),0);        
    }
};