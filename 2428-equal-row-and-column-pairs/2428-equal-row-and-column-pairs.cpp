class Solution
{
public:
    int equalPairs(vector<vector<int>>& grid)
    {
        const size_t size = grid.size();
        int tmp = 0;
        int i = 0;
        while(i < size)
        {
           int j = 0;
            while(j < size)
            {
                int n = 0;
                while(n < size)
                {
                    if(grid[i][n] != grid[n][j])
                    {
                        break;
                    }
                    ++n;
                }
               if(n == size)
                {
                    ++tmp;
                }
                ++j;
            }
            ++i;
        }
        return tmp;
    }
};