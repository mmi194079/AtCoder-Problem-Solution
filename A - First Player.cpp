
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string>v;
    int n;
    cin>>n;
    long long aa,idx;
    aa=99999999999;
    for(int i=0; i<n; i++){
        string s;
        long long a;
        cin>>s>>a;
         v.push_back(s);
        if(a<aa){
            aa=a;
            idx=i;
        }
    }
    for(int i=idx;i<n; i++)cout<<v[i]<<endl;
    for(int i=0;i<idx; i++)cout<<v[i]<<endl;
}
