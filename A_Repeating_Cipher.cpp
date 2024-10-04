#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int currDigit = 0, temp = 1;

    while (n > currDigit)
    {
        cout << s[currDigit];
        currDigit += temp;
        temp++;
    }
}

// 1 22 333 4444 55555 666666 7777777 88888888 999999999 0000000000
// 1 23 456 7890 12345 678901 2345678 90123456 789012345 6789012345
// 1 2  4   7    11    16     22      29       37        46