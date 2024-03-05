class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                char cij=s[i];
                while(i<j and s[i]==cij){
                    s[i]='1';
                    i++;
                }
                i--;
                while(i<j and s[j]==cij){
                    s[j]='1';
                    j--;
                }
                j++;
            }
            else break;
            i++;j--;
        }
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' or s[i]=='b' or s[i]=='c') cnt++;
        }
        cout<<s;
        return cnt;
    }
};