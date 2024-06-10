class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>ve=heights;
        sort(heights.begin(),heights.end());
        int c=0;
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=ve[i])c++;
        }
        return c;
    }
};