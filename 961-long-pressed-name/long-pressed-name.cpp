class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(name.size()>typed.size()) return 0;
        if(name.size()==typed.size() and name==typed) return 1;
        if(name.size()==typed.size() and name!=typed) return 0;
        vector<char>v;
        vector<int>v1;
        int a=0,cnt=0,f=0;
        for(int i=0;i<name.size();i++)
        {
            if(v.size()==0)
            {
                v.push_back(name[i]);
                cnt++;
            }
            else if(v[a]==name[i]) cnt++;
            else if(v[a]!=name[i])
            {
                v1.push_back(cnt);
                cnt=1;
                v.push_back(name[i]);
                a++;
            }
        }
        v1.push_back(cnt);
        a=0;
        cnt=0;
        for(int i=0;i<typed.size();i++)
        {   
            if(v[a]==typed[i]) cnt++;
            else if(v[a]!=typed[i])
            {
                v1[a]-=cnt;
                cnt=1;
                a++;
                if(a==v.size()) return 0;
                if(v[a]!=typed[i]) return 0;
            }
        }
        v1[a]-=cnt;
        for(int i=0;i<v1.size();i++) if(v1[i]>0) return 0;
        return 1;
    }
};