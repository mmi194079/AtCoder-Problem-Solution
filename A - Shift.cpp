#include<bits/stdc++.h>
using namespace std;

int main()
{
        int k,n,a,s=0;
        deque<int>d;
        cin>>n>>k;

        for(int i=0;i<n;i++){
           // int num;
            cin>>a;
            d.push_back(a);
        }

        for(int i=0;i<k;i++){
            d.pop_front();
            d.push_back(s);
        }

        for(int i=0;i<n;i++){
            cout<<d[i];
        }
}
