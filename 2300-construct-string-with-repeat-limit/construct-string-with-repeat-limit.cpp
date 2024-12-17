class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int>v(26);
        for(int i=0;i<s.size();i++){
            v[s[i]-97]++;
        }
        string ans="";
        int i=25;
        while(i>=0){
            int limit = repeatLimit;
            if(v[i]>0){
                while(v[i] && limit){
                    ans+=char(i+97);
                    v[i]--;
                    limit--;
                }
                if(limit==0 and v[i]!=0){
                    for(int j=i-1;j>=0;j--){
                        if(v[j]>0){
                            ans+=char(j+97);
                            v[j]--;
                            i++;
                            break;
                        }
                    }
                }
            }
            i--;
        }
        return ans;
    }
};