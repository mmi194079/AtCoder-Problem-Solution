#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,a,sum=0;
     vector<int>v;
     cin>>n;

     for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        sum+=v[i];

     }

     cout<<sum;
}
