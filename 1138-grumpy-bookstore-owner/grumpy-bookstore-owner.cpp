class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int c=0,c1=0,m=0,j=0;
        for(int i=0;i<customers.size();i++)
        {
            if(grumpy[i]==0)
            {
                c+=customers[i];
                customers[i]=0;
            }
            if(i<minutes) c1+=customers[i];
            else{
                m=max(c1,m);
                c1-=customers[j];
                c1+=customers[i];
                j++;
            }
        }
        m=max(c1,m);
        return c+m;
    }
};