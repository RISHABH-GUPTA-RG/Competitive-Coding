#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        string num;
        cin >> num;

        int digit = stoi(num) % 10;
        int add = 0;
        for (int i = 1; i <= num.size(); i++)
        {
            add += i;
        }

        cout << (digit - 1) * 10 + add << endl;
    }
}