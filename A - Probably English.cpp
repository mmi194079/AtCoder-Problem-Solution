#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        vector<string>v;
        cin>>n;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }

        for(int i=0;i<n;i++){
            if(v[i]=="and" or v[i]=="not" or v[i]=="that" or v[i]=="the" or v[i]=="you"){
                cout<<"Yes";
                return 0;
            }


        }

                cout<<"No";
                return 0;

}
