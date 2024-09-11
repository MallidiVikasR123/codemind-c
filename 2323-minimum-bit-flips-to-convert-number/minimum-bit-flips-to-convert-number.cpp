class Solution {
public:
    int minBitFlips(int start, int goal) {
       int x=(start^goal),cnt=0;
       while(x){
           if(x%2)cnt++;
           x/=2;
       }
       return cnt;
    }
};