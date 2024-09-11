class Solution {
public:
    int minBitFlips(int start, int goal) {
        int step=0,n=1;
        if(start==goal) return 0;
        while(n!=32){
            if((start&1)!=(goal&1)) step++;
            start>>=1;
            goal>>=1;
            n++;
        }
        return step;
    }
};