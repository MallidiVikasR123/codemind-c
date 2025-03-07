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
        vector<int>v={-1,-1},primeList;
        for(int i=left;i<=right;i++) if(isPrime(i)) primeList.push_back(i);
        if(primeList.size()<1) return v;
        int m = INT_MAX;
        for(int i=0;i<primeList.size()-1;i++){
            if(primeList[i+1]-primeList[i]<m){
                m = primeList[i+1]-primeList[i];
                v[0]=primeList[i];
                v[1]=primeList[i+1];
            }
        }
        return v;
    }
};