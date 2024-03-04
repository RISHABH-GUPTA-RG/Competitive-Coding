
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        int studentthatknowsol = 0, temp;
        for (int i = 0; i < 3; i++)
        {
            cin >> temp;
            if (temp)
                studentthatknowsol++;
        }
        if (studentthatknowsol >= 2)
            count++;
    }
    cout << count;
}