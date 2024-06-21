class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>v,v1;
        int c=0,j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==x)
            {
                v1.push_back(i);
            }
        }
        j=v1.size();
        for(int i=0;i<queries.size();i++)
        {
            if(queries[i]>j)
            {
                v.push_back(-1);
            }
            else{
                v.push_back(v1[queries[i]-1]);
            }
        }
        return v;
    }
};