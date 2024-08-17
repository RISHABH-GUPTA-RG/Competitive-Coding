#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int maxValue = INT_MIN;
    int minValue = INT_MAX;
    int maxPointer = 0;
    int minPointer = 0;
    for (int i = 0; i < t; i++)
    {
        int temp;
        cin >> temp;
        if (temp <= minValue)
        {
            minValue = temp;
            minPointer = i;
        }
        if (temp > maxValue)
        {
            maxValue = temp;
            maxPointer = i;
        }
    }
    if (maxPointer > minPointer)
        cout << ((t - 1) - minPointer) + (maxPointer)-1;
    else
        cout << ((t - 1) - minPointer) + (maxPointer);
}

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   int x, minindex, maxindex, maxi = 0, mini = 1000;
//   for(int i = 0; i < n; i++){
//     cin>>x;
//     if(x > maxi){
//       maxindex = i;
//       maxi = x;
//     }
//     if(x <= mini){
//       minindex = i;
//       mini = x;
//     }
//   }

//   if(maxindex>minindex){
// 	cout<<(maxindex-1)+(n-minindex)-1;
// }
// else{
// 	cout<<(maxindex-1)+(n-minindex);

// }

// }