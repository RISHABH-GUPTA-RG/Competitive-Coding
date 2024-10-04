#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int noOfLevels = 0;
    int sumTillCurrLevel = 0;

    while (sumTillCurrLevel <= x)
    {
        noOfLevels++;
        for (int i = 1; i <= noOfLevels; i++)
        {
            sumTillCurrLevel += i;
        }

        // cout << noOfLevels << sumTillCurrLevel << endl;
    }

    cout << noOfLevels - 1;
}