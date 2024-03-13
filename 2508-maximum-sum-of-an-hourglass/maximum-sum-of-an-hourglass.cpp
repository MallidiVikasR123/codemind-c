class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(0);
        int maxx=INT_MIN;
        for(int i=0;i<grid.size()-2;i++)
        {
            for(int j=0;j<grid[0].size()-2;j++)
            {
                int s=0;
                for(int k1=i;k1<3+i and (3+i)<=grid.size();k1++)
                {
                    for(int k2=j;k2<3+j and (3+j)<=grid[0].size();k2++)
                    {
                        if(k1==i+1 and k2!=j+1) continue;
                        s+=grid[k1][k2];
                    }
                }
                maxx=max(s,maxx);
            }
        }
        return maxx;
    }
};