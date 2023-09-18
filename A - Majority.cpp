#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        vector<string>s;
        cin>>n;

        for(int i=0;i<n;i++){
            string s1;
            cin>>s1;
            s.push_back(s1);
        }
        int count=0,count1=0;
        for(int i=0;i<n;i++){
            if(s[i]=="For")count++;
            else count1++;
        }
        if(count>count1)cout<<"Yes";
        else cout<<"No";
}
