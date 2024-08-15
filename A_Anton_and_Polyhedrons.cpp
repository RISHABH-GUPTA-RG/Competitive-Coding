#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<string, int> dic;
    dic["Tetrahedron"] = 4;
    dic["Cube"] = 6;
    dic["Octahedron"] = 8;
    dic["Dodecahedron"] = 12;
    dic["Icosahedron"] = 20;

    int ans=0;
    while (t--)
    {
        string temp;
        cin >> temp;
        ans += dic[temp];
    }
    cout << ans;
}