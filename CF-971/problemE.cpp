// Klee's SUPER DUPER LARGE Array!!!

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n, 0);

        for (long long i = 0; i < n; i++)
        {
            arr[i] = k + i;
        }
        long long ans = 0;
        for (long long i = 0; i < n; i++)
        {
            if (arr[i] > n)
            {
                ans -= arr[i];
            }
            else
            {
                ans += arr[i];
            }
        }
        cout << abs(ans) << endl;
    }
}