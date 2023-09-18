#include<bits/stdc++.h>
using namespace std;
long long poww(long long a, long long b){
    long long aa=1;
    while(b--){
        aa*=a;
    }
    return aa;
}
int main()
{
        unsigned long long a,b;
        cin>>a>>b;
        cout<<poww(4,3);
}
