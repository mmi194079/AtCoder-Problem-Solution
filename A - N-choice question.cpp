#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n,a,b,c,count=0;
        cin>>n>>a>>b;
        vector<int>v;
        vector<int>::iterator it;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        int sum=a+b;
        for(int i=0;i<n;i++){
            if(v[i]==sum){
                cout<<i+1;
                break;
            }

        }
}
