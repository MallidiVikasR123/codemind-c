//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]) or (s[i]=='-' and i==0)) cnt++;
        }
        if(s.size()!=cnt) return -1;
        int a=stoi(s);
        return a;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends