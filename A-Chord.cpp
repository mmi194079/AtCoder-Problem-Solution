#include<bits/stdc++.h>
using namespace std;
int main(){
string s[7]={"ACE","BDF","CEG","DFA","EGB","FAC","GBD"};
string s1;
cin>>s1;
int c=0;
for(int i=0;i<7;i++){
    if(s[i]==s1){
        c=1;
        break;
    }

    }

if(c==1)
    cout<<"Yes";
 else
        cout<<"No";

}

