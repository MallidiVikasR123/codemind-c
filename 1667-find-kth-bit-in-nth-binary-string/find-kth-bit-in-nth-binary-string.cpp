class Solution {
public:
    char findKthBit(int n, int k) {
        string store = "0";
        for(int i=2;i<=n;i++){
            string temp="";
            for(int j=0;j<store.size();j++) temp+=(store[j]=='0'? '1' :'0');
            reverse(temp.begin(), temp.end());
            store = store + "1"+ temp;
        }
        return store[k-1];
    }
};