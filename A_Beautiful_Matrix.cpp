#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr;

    // (0,0) (0,1) (0,2) (0,3) (0,4)
    // (1,0) (1,1) (1,2) (1,3) (1,4)
    // (2,0) (2,1) (2,2) (2,3) (2,4)
    // (3,0) (3,1) (3,2) (3,3) (3,4)
    // (4,0) (4,1) (4,2) (4,3) (4,4)
    // target 2,2. Can move in 1 column or row

    // position of 1 in the matrix
    int x, y;

    for (int i = 0; i < 5; i++)
    {
        vector<int> row;
        for (int j = 0; j < 5; j++)
        {
            int num;
            cin >> num;
            if (num == 1)
            {
                x = i;
                y = j;
            }
            row.push_back(num);
        }
        arr.push_back(row);
    }

    cout << abs(2 - x) + abs(2 - y);
}