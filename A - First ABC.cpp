#include<bits/stdc++.h>
using namespace std;

int main(){
set<char>s;
string s1;

int N,count=0;
cin>>N;
cin>>s1;
for(int i=0; i<N; i++)
{
    s.insert(s1[i]);
    count++;
    if(s.size()==3)
        break;

}
cout<<count;
}
