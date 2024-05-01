//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        int n = s.length();
        while (n < 3)
        {
            s = '0' + s;
            n++;
        }
        int lsthree = 0;
        for (int i = n - 3; i < n; i++)
        {
            lsthree = lsthree * 10 + (s[i] - '0');
        }

        if (lsthree % 8 == 0)
        {
            return 1;
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends
