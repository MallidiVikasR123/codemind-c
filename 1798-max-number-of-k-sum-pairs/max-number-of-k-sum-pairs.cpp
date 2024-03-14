class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            int a=k-nums[i];
            if(m[nums[i]]>0){
                if(m.find(a)!=m.end())
                {
                    if(a==nums[i] and m[a]>1)
                    {
                        m[a]-=2;
                        cnt++;
                    }
                    else if(a!=nums[i] and m[a]>0)
                    {
                        m[nums[i]]--;
                        m[a]--;
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};
auto init = []() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();