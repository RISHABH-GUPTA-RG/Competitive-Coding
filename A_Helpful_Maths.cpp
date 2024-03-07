#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;
    int size = s1.size();
    char arr[size];
    int j = 0;
    for (int i = 0; i < size; i += 2)
    {
        arr[j] = s1[i];
        j++;
    }
    sort(arr, arr + j);
    for (int i = 0; i < j - 1; i++)
    {
        cout << arr[i] << "+";
    }
    cout << arr[j - 1];
    return 0;
}