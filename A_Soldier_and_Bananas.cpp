#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int amountToPay = 0;
    for (int i = 1; i <= w; i++)
        amountToPay += i * k;
    (n >= amountToPay) ? cout << 0 : cout << amountToPay - n;
}