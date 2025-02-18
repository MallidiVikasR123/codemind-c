class Solution {
public:
    string smallestNumber(string pattern) {
        stack<string>in,d;
        int num=1;
        for(int i=0;i<pattern.size();i++){
            if(pattern[i]=='I'){
                in.push(to_string(num));
                num++;
                if(d.size()!=0){
                    while(d.size()!=0){
                        in.push(d.top());
                        d.pop();
                    }  
                }
            }
            else{
                d.push(to_string(num));
                num++;
            }
        }
        if(d.size()!=0){
            d.push(to_string(num));
            while(d.size()!=0){
                in.push(d.top());
                d.pop();
            }  
        }
        else{
            in.push(to_string(num));
        }
        string ans="";
        while(!in.empty()){
            ans+=in.top();
            in.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};