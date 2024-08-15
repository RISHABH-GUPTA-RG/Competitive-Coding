#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        vector<int> ans;
        int digit = 0;
        while (num > 0)
        {
            int temp = num % 10;
            if (temp != 0)
            {
                ans.push_back(temp * (pow(10, digit)));
            }
            num /= 10;
            digit++;
        }
        cout << ans.size() << endl;
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}