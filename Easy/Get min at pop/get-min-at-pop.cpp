//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

// } Driver Code Ends
//User function Template for C++
stack<int>st;
vector<int>v;
//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
   // your code here
   if(n==0) return st;
   int m=arr[0];
   for(int i=0;i<n;i++)
   {
       m=min(m,arr[i]);
       v.push_back(m);
       st.push(arr[i]);
   }
   return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(v.size()!=0)
    {
        cout<<v[v.size()-1]<<" ";
        st.pop();
        v.pop_back();
    }
}

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    cout<<endl;
	    
	}
	return 0;
}


// } Driver Code Ends