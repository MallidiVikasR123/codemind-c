class Solution {
public:
    int minimumLength(string s) {
        ios_base::sync_with_stdio(0);
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                char cij=s[i];
                while(i<j and s[i]==cij) i++;
                i--;
                while(i<j and s[j]==cij)j--;
                j++;
            }
            else break;
            i++;j--;
        }
        if(i>j) return 0;
        int a=j-i+1;
        return a;
    }
};