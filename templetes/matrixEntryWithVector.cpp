#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr;
    int rowLen = 5;
    int columnLen = 5;

    for (int i = 0; i < columnLen; i++)
    {
        vector<int> row;
        for (int j = 0; j < rowLen; j++)
        {
            int num;
            cin >> num;

            row.push_back(num);
        }
        arr.push_back(row);
    }

    cout << endl;

    for (int i = 0; i < columnLen; i++)
    {
        for (int j = 0; j < rowLen; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}