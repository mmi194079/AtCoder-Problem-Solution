#include<bits/stdc++.h>
using namespace std;

int main()
{
        long long int n,h;
        cin>>n;
        priority_queue<pair<int,int>>q;

        for(int i=0;i<n;i++){
            cin>>h;
            q.push(make_pair(h,i));
        }

        int x=q.top().second+1;
        cout<<x;


}
