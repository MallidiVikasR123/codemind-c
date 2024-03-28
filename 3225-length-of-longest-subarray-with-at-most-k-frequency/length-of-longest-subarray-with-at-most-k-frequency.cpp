class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,int>m;
        int i=0,j=0,maxx=INT_MIN;
        while(j<nums.size() and i<=j)
        {
            m[nums[j]]++;
            if(m[nums[j]]>k)
            {
                while(nums[i]!=nums[j])
                {
                    m[nums[i]]--;
                    i++;
                }
                if(nums[i]==nums[j] and i!=j) i++;
                else if(nums[i]==nums[j] and i==j) i=j;
                m[nums[j]]--;
            }
            maxx=max(maxx,abs(i-j)+1);
            j++;
        }
        return maxx;
    }
};