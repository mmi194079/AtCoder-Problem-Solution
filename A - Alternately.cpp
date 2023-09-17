#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;
    cin>>N>>S;
    if(N==1){
        cout<<"Yes";
        return 0;
    }
    for(int i = 1;i<N;i++){
        if(S[i]==S[i-1]){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;

}
