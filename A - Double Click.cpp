#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n,d,x,count=0;
        cin>>n>>d;
        vector<int>v;
        for(int i=0;i<n;i++){

            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int y=1;
        //for(int i=0;i<n;i++)cout<<v[i]<<" ";
        for(int i=0;i<n-1;i++){
            if((v[i+1]-v[i])<=d){
               cout<<v[i+1];
               y=0;
               break;
               }

        }
        //cout<<count;
        if(y==1)cout<<"-1";
}
