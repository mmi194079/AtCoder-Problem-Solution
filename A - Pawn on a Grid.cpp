#include<bits/stdc++.h>
using namespace std;

int main()
{
        int h,w;
        char s;
        int count=0,count1=0;
        cin>>h>>w;
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
                cin>>s;
            if(s=='#')count++;
           // else count1++;


            }
        }
        cout<<count;

}
