#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[2] = {};
        string x;
        cin>>x;
        for (char j : x)
        {
            if (j == 'A')
                arr[0]++;
            else
                arr[1]++;
        }
        (arr[0]>arr[1])?cout<<"A":cout<<"B";
        cout<<endl;
    }
    return 0;
}