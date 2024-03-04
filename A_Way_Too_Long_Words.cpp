#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin>>x;
        int l=x.length();
        if(l>10){
            cout<<x[0]<<l-2<<x[l-1];
        }
        else{
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}