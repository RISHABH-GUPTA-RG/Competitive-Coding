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
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        int rem = sum % 3;

        if (rem == 0)
            cout << 0;
        else
        {
            int flag = 0;
            for (int i = 0; i < n; i++)
            {
                if ((sum - arr[i]) % 3 == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                cout << 1;
            else
            {
                if ((3 - rem) < 2)
                    cout << 1;
                else
                    cout << 2;
            }
        }
        cout << endl;
    }
}
