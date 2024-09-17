#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int min_cap = INT_MIN;
    int currentNoOfPassengers = 0;

    while (t--)
    {
        int personEntered, PersonExited;
        cin >> PersonExited >> personEntered;
        currentNoOfPassengers = currentNoOfPassengers + personEntered - PersonExited;
        min_cap = max(min_cap, currentNoOfPassengers);
    }
    cout << min_cap;
}