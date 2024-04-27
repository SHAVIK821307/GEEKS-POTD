//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    long long sumBitDifferences(int arr[], int n)
    {
        long long cnt = 0, sum = 0;

        for (int i = 0; i < 32; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (((1 << i) & arr[j]) != 0)
                {
                    cnt++;
                }
            }
            sum = sum + (2 * cnt * (n - cnt));

            cnt = 0;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends