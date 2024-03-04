class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int m=0;
        int i=0,j=tokens.size()-1;
        int score=0;
        sort(tokens.begin(),tokens.end());
        while(i<=j)
        {
            if(tokens[i]<=power)
            {
                power-=tokens[i];
                score++;
                i++;
            }
            else if(score>0)
            {
                score--;
                power+=tokens[j];
                j--;
            }
            else i++;
            m=max(score,m);
        }
        return m;
    }
};