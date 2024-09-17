// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string xx;
//     cin >> xx;
//     vector<int> v(4, 0);
//     for (auto &x : xx)
//     {
//         if (x == '1')
//             v[1]++;
//         else if (x == '2')
//             v[2]++;
//         else if (x == '3')
//             v[3]++;
//         else
//             v[0]++;
//     }
//     int totalDigits = v[1] + v[2] + v[3];
//     for (int i = 0; i < v[1]; i++)
//     {
//         totalDigits--;
//         cout << 1;
//         if (totalDigits)
//             cout << "+";
//     }
//     for (int i = 0; i < v[2]; i++)
//     {
//         totalDigits--;
//         cout << 2;
//         if (totalDigits)
//             cout << "+";
//     }
//     for (int i = 0; i < v[3]; i++)
//     {
//         totalDigits--;
//         cout << 3;
//         if (totalDigits)
//             cout << "+";
//     }
// }

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