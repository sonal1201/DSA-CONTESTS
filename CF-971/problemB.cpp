// osu!mania

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string ans[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ans[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 3; j >= 0; j--)
            {
                if (ans[i][j] == '#')
                {
                    cout << j + 1 << " ";
                }
            }
        }
        cout << endl;
    }
}