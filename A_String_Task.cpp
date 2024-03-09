#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin>>x;
    for(char a: x){
        a=tolower(a);
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='y')
            cout<<"";
        else
            cout<<"."<<a;
    }
}