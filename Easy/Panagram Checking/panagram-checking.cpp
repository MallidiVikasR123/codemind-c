//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        bool upper_case_letters[26] = {false};

        for (const char& c : s) {
            if (std::isalpha(c) and isupper(c)) {
                upper_case_letters[c - 'A'] = true;
            } else if (std::isalpha(c)) {
                upper_case_letters[c - 'a'] = true;
            }
        }
    
        for (int i = 0; i < 26; ++i) {
            if (!upper_case_letters[i]) {
                return false;
            }
        }
    
        return true;
        
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends