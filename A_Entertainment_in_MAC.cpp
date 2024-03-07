#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        n = s.length();
        int flag = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == s[n - i - 1])
                continue;
            if (s[i] > s[n - i - 1])
                flag = 1;
            else
                break;
        }
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (flag == 0)
            cout << s << endl;
        else
            cout << rev << s << endl;
    }
}