class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt = 0;
        int a=0,b=0,c=0;
        for(int i=0;i<s.size();i++){
            a=0,b=0,c=0;
            for(int j=i;j<s.size();j++){
                if(s[j]=='a') a=1;
                if(s[j]=='b') b=1;
                if(s[j]=='c') c=1;
                if(a==1 and b==1 and c==1){
                    cnt+= (s.size()-j);
                    break;
                }
            }
        }
        return cnt;
    }
};