#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>vec;
vector<int >::iterator it;
int n,q,p,d,sum=0;
cin>>n>>q>>p;
for(int i=0;i<n;i++){
    cin>>d;
    vec.push_back(d);
}
int ans=q;
for(it=vec.begin();it!=vec.end();it++){
        sum=p+*it;
        ans=min(sum,ans);
}
cout<<ans;



}
