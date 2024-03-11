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

        int f1 = 1;

        vector<int> l(n);
        for (int i = 0; i < n; i++)
            cin >> l[i];

        for (int i = 0; i < n - 2; ++i)
        {
            if (l[i] < 0)
            {
                f1 = 0;
                break;
            }

            int temp = l[i];
            l[i] -= temp;
            l[i + 2] -= temp;
            l[i + 1] -= 2 * temp;
        }

        int zer0count = count(l.begin(), l.end(), 0);
        if (zer0count == n && f1 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}