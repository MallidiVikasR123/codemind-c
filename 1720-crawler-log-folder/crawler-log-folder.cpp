class Solution {
public:
    int minOperations(vector<string>& logs) {
        int steps=0;
        for(int i=0;i<logs.size();i++)
        {
            if(logs[i]=="../" and steps>0) steps--;
            else if(logs[i]=="./" or (logs[i]=="../" and steps==0)) steps+=0;
            else steps++;
        }
        return steps;
    }
};