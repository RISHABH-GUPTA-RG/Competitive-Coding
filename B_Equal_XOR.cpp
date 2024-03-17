#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int arr[2 * n];
    for (int i = 0; i < 2 * n; i++)
    {
      cin >> arr[i];
    }
    set<int> s;
    map<int, int> mp1, mp2;
    for (int i = 0; i < n; i++)
    {
      s.insert(arr[i]);
      mp1[arr[i]]++;
    }
    vector<int> v;
    for (int i = n; i < 2 * n; i++)
    {
      if (s.find(arr[i]) != s.end())
      {
        v.push_back(arr[i]);
      }
      mp2[arr[i]]++;
    }
    vector<int> ans1, ans2;
    int temp = k;
    for (auto x : mp1)
    {
      if (x.second == 2 && k != 0)
      {
        ans1.push_back(x.first);
        ans1.push_back(x.first);

        k--;
      }
    }
    k = temp;
    for (auto x : mp2)
    {
      if (x.second == 2 && k != 0)
      {
        ans2.push_back(x.first);
        ans2.push_back(x.first);

        k--;
      }
    }
    k = 2 * k;
    for (int i = 0; i < v.size(); i++)
    {
      if (k != 0)
      {
        ans1.push_back(v[i]);
        ans2.push_back(v[i]);
        k--;
      }
    }
    for (auto x : ans1)
    {
      cout << x << " ";
    }
    cout << endl;
    for (auto x : ans2)
    {
      cout << x << " ";
    }
    cout << endl;

  }
}