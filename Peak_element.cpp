//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
public:
    int peakElement(int arr[], int n)
    {
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (m > 0 && m < (n - 1))
            {
                if (arr[m] >= arr[m - 1] && arr[m] >= arr[m + 1])
                    return (m);
                if (arr[m] >= arr[m - 1])
                    l = m + 1;
                else
                    r = m - 1;
            }
            else if (m > 0)
            {
                if (arr[m] >= arr[m - 1])
                    return (m);
                r = m - 1;
            }
            else
            {
                if (arr[m] >= arr[m + 1])
                    return (m);
                l = m + 1;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], tmp[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            tmp[i] = a[i];
        }
        bool f = 0;
        Solution ob;

        int A = ob.peakElement(tmp, n);

        if (A < 0 and A >= n)
            cout << 0 << endl;
        else
        {
            if (n == 1 and A == 0)
                f = 1;
            else if (A == 0 and a[0] >= a[1])
                f = 1;
            else if (A == n - 1 and a[n - 1] >= a[n - 2])
                f = 1;
            else if (a[A] >= a[A + 1] and a[A] >= a[A - 1])
                f = 1;
            else
                f = 0;
            cout << f << endl;
        }
    }

    return 0;
}
// } Driver Code Ends