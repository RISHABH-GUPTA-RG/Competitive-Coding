#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (auto &c : s)
        if (c == '4' or c == '7')
            cnt++;
    (cnt == 4 or cnt == 7) ? cout << "YES" : cout << "NO";
}