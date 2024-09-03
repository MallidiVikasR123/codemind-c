class Solution {
public:
    int getLucky(string s, int k) {
        string a="";
        for(int i=0;i<s.size();i++){
            a+=to_string(int(s[i])-96);
        }
        int ans=0;
        for(int i=0;i<k;i++){
            ans=0;
            for(int j=0;j<a.size();j++){
                ans+=a[j]-'0';
            }
            a=to_string(ans);
        }
        return ans;
    }
};