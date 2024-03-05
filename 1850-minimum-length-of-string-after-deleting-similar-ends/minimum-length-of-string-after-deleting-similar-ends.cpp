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
        cout<<s;
        if(i>j) return 0;
        return (j-i+1);
    }
};