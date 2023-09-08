#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec;

int n;
cin>>n;
if(n>=0 && n<=100){

    if(n%5==0){
        cout<<n;
    }
    else{
        int x=n%5;
        if(x<=2)
            cout<<n-x;
        else
            cout<<n-x+5;

    }

}

}
