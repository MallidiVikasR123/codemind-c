class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>m;
        string a="";
        for(int i=0;i<s1.size();i++){
            if(s1[i]==' '){
                m[a]++;
                a="";
            }
            else a+=s1[i];
        }
        m[a]++;
                a="";
        for(int i=0;i<s2.size();i++){
            if(s2[i]==' '){
                m[a]++;
                a="";
            }
            else a+=s2[i];
        }
        m[a]++;
                a="";
        vector<string>v;
        for(auto i:m){
            if(i.second==1) v.push_back(i.first);
        }
        return v;
    }
};