#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows, cols;
    cin >> rows >> cols;
    for (int i = 1; i <= rows; i++)
    {
        if(i%4==0){
            cout<<"#";
            for (int j = 1; j < cols; j++)
            {
                cout<<".";
            }
        }
        else if(i%2==0){
            for (int j = 1; j < cols; j++)
            {
                cout<<".";
            }
            cout<<"#";
        }
        else{
            for (int j = 1; j <= cols; j++)
            {
                cout<<"#";
            }
        }
        cout << endl;
    }
}