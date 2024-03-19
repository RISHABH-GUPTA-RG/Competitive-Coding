#include<bits/stdc++.h>

using namespace std;

#define ll long long

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll left[2],right[2];
        left[0]=0;
        left[1]=0;
        right[0]=0;
        right[1]=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                right[0]++;
            }
            else
            {
                right[1]++;
            }

        }

        ll ans=-1;
        ll val=LONG_LONG_MAX;
        if((n/2)+(n%2)<=right[1])
        {
            
            val=n;
            ans=0;
        }
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                right[0]--;
                left[0]++;
            }
            else
            {
                right[1]--;
                left[1]++;
            }

            ll leftcnt=left[0]+left[1];
            ll rightcnt=right[0]+right[1];

            if((leftcnt/2)+(leftcnt%2)<=left[0] && (rightcnt/2)+(rightcnt%2)<=right[1])
            {
                ll hue=abs(rightcnt-leftcnt);
                if(hue<val)
                {
                    val=hue;
                    ans=i+1;
                }
            }
        }
        cout<<ans<<endl;

    }
}