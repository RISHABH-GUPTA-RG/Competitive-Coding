#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int introvert, extrovert, universal;
        cin >> introvert >> extrovert >> universal;

        int x = extrovert % 3;

        if (x + universal >= 3 || x == 0)
        {
            cout << fixed << setprecision(0) << (introvert + ceil((extrovert + universal) / 3.0));
        }
        else
            cout << -1;
        cout << endl;
    }
}