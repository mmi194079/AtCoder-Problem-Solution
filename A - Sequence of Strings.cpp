#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        vector<string>v;
        cin>>n;

        for(int i=0;i<n;i++){
            string s1;
            cin>>s1;
            v.push_back(s1);
        }

        reverse(v.begin(),v.end());

        for(int i=0;i<n;i++){
            cout<<v[i]<<endl;
        }
}
