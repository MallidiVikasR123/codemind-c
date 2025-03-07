class Solution {
public:
    bool isPrime(int n){
        if(n<2) return 0;
        for(int i=2;i<int(sqrt(n))+1;i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>v={-1,-1};
        if(left==right) return v;
        int m = (right - left)+1,a,b,abool=0,bbool=0;
        while(left<=right){
            if(isPrime(left)){
                if(abool==0){
                    a=left;
                    abool=1;
                }
                else{
                    b=left;
                    bbool=1;
                }
            }
            if(abool and bbool){
                if((b-a)<m){
                    m = b-a;
                    v[0]=a;
                    v[1]=b;
                }
                a=b;
                bbool=0;
            }
            left++;
        }
        return v;
    }
};