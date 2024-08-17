#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int sum = 0;
    while (t--)
    {
        int temp;
        cin >> temp;
        sum += temp;
    }
    (sum > 0) ? cout << "HARD" : cout << "EASY";
}