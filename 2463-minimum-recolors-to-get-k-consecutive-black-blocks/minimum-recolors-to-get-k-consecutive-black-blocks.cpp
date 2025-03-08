class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0,j=0;
        int cnt = 0,m = blocks.size();
        while(j<blocks.size()){
            if((j-i)==k){
                m = min(m,cnt);
                cout<<m<<" ";
            }
            if(blocks[j]=='W'){
                cnt++;
            }
            if((j-i)>=k){
                while((j-i)>=k){
                    if(blocks[i]=='W'){
                        cnt--;
                    }
                    i++;
                }
            }
            j++;
        }
        if((j-i)==k){
                m = min(m,cnt);
                cout<<m<<" ";
            }
        return m;
    }
};