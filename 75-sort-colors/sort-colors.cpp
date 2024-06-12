class Solution {
public:
    void sortColors(vector<int>& n) {
        int a=0,b=0;
        for(int i:n) 
        {
            if(i==0) a++;
            else if(i==1) b++;
        }
        for(int i=0;i<n.size();i++)
        {
            if(a!=0){
                n[i]=0;
                a--;
            }
            else if(b!=0)
            {
                n[i]=1;
                b--;
            }
            else n[i]=2;
        }
    }
};