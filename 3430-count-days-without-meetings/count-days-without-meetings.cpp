class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int c=0;
        sort(meetings.begin(),meetings.end());
        for(int i=0;i<meetings.size();i++){
            cout<<"["<<meetings[i][0]<<","<<meetings[i][1]<<"],";
        }
        int i=0;
        int m=0,ll=0,mi=0;
        while(i<meetings.size()){
            if(i+1<meetings.size() and (meetings[i][1]>=meetings[i+1][0] or m>=meetings[i+1][0])){
                if(ll==0){
                    mi=meetings[i][0];
                    ll=1;
                }
                m=max(m,max(meetings[i+1][1],meetings[i][1]));
                cout<<m<<" ";
            }
            else if(ll!=0)
            {
                days-=(m-mi)+1;
                cout<<m<<" "<<mi
;                ll=0;
            }
            else
            {
                days-=(meetings[i][1]-meetings[i][0]+1);
            }
            i++;
        }
        return days;
    }
};