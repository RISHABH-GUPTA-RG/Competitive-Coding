#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string str;
        cin >> str;
        int h1 = (int)str[0] - '0';
        int h2 = (int)str[1] - '0';
        int hh = h1 * 10 + h2;
        string last;
        if (hh < 12)
        {
            last = "AM";
        }
        else
        {
            last = "PM";
        }

        hh %= 12;
        if (hh == 0)
        {
            cout << "12";
            for (int i = 2; i < 5; i++)
            {
                cout << str[i];
            }
        }
        else
        {
            if(hh<10){
                cout<<"0";
            }
            cout << hh;
            for (int i = 2; i < 5; i++)
            {
                cout << str[i];
            }
        }
        cout <<" "<< last << endl;
    }
}