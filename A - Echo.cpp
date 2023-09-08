#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char>vec;
    vector<char>::iterator it;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
             char s;
            cin>>s;
            vec.push_back(s);
    }


    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<*it;
    }




}
