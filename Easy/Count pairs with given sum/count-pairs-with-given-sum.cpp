//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
    	int cnt=0;	
    	unordered_map<int,int>mp;
    	for(int i=0;i<n;i++){
    		mp[arr[i]]++;
    	}
    	for(auto i:mp)
    	{
    	    int x=k-i.first;
    	    if(x==i.first)
    	    {
    	        cnt+=(i.second*(i.second-1))/2;
    	        mp[i.first]=0;
    	    }
    	    else if(mp.find(x)!=mp.end())
    	    {
    	        cnt+=mp[x]*i.second;
    	        mp[x]=0;
    	    }
    	}
    	return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends