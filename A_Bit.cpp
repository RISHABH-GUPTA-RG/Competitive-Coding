#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string exp;
        cin >> exp;
        if (exp == "++X" || exp == "X++")
            x++;
        else
            x--;
    }
    cout << x;
}