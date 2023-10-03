class Solution {
public:
    bool judgeCircle(string moves)
    {
        int  i = 0;
        for(int j = 0; j < moves.size(); j++)
        {
            if(moves[j]=='U')
            {
                i++;
            }
            if(moves[j]=='D')
            {
                i--;
            }
        }
        if(i != 0)
        {
            return false;
        }
         for(int s = 0; s < moves.size(); s++)
        {
            if(moves[s]=='R')
            {
                i++;
            }
            if(moves[s]=='L')
            {
                i--;
            }
        }
        if(i != 0)
        {
            return false;
        }
        return true;
    }
};