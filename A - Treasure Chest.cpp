#include<bits/stdc++.h>
using namespace std;

int main()
{
        string v;
        int n,flag=0,flag2=0;
        cin>>n;
        for(int i=0;i<n;i++){
            char s;
            cin>>s;
            v.push_back(s);
        }
        int cn=0;
        bool ok=false;
        for(int i=0;i<n;i++){

                if(v[i]=='*' &&(cn==0 || cn==2)){
                    cout<<"out";
                    break;
                }
                if(v[i]=='*'&&cn==1){
                    cout<<"in"<<endl;
                    break;
                }
                if(v[i]=='|')cn++;
        }




}
