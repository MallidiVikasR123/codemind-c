class Solution {
public:
    int minSteps(string s, string t) {
        ios_base::sync_with_stdio(0);
        vector<int>v(26);
        for(int i=0;i<s.size();i++)
        {
            v[s[i]-'a']+=1;
        }
        for(int i=0;i<t.size();i++)
        {
            v[t[i]-'a']-=1;
        }
        int cnt=0;
        for(int i=0;i<26;i++)
        {
            cnt+=abs(v[i]);
        }
        return cnt;
    }
};