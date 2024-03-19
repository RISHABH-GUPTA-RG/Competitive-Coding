#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b,m;
        cin>>a>>b>>m;
        ll ans=2;
        ans+=(m/a);
        ans+=(m/b);
        cout<<ans<<endl;
    }
    
}