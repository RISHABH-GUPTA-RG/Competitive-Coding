#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    int n;
    cin >> n;
    int ans = 0;
    int currmax = 0;
    int prev = -1;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp > prev)
        {
            currmax++;
        }
        else
        {
            currmax = 1;
        }
        prev = temp;
        ans = max(ans, currmax);
    }
    cout << ans;
}