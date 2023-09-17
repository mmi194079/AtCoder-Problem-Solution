#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        vector<int>v;
        cin>>n;

        for(int i=0;i<n;i++){
            int n1;
            cin>>n1;
            v.push_back(n1);
        }

        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                cout<<v[i]<<" ";
            }
        }

}
