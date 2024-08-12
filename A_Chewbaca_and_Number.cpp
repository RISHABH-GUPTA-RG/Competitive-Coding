#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin >> num;

    for (int i = 0; i < size(num); i++)
    {
        char c = num[i];
        if (i == 0 and c > '4' and c < '9')
            num[i] = '9' - c + '0';
        else if (i > 0 and c > '4')
            num[i] = '9' - c + '0';
    }

    cout << num;
}