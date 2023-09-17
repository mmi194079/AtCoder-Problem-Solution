#include<bits/stdc++.h>
using namespace std;

int main()
{
       // vector<string>c;
        string s;
        cin>>s;
        //c.push_back(s);

        for(int i=0;i<s.size();i+=2){
            swap(s[i],s[i+1]);

        }
            cout<<s;
}
