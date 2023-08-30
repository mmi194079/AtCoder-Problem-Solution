#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b;
cin>>a>>b;
if(a%3==0){
    cout<<"No";
}
else{
if(a>b)swap(a,b);
    if(b-a==1){
        cout<<"Yes";
    }
    else
        cout<<"No";

}
return 0;

}
