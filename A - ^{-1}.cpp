#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n,x,p;
        cin>>n>>x;
        vector<int>v;

        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            v.push_back(p);
        }

        for(int i=0;i<n;i++){
            if(v[i]==x){
                cout<<i+1;
                break;
            }
        }
}
