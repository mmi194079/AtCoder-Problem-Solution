#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,x,ans,sum,a,num,i;
    cin>>n>>x;
    n=n-1;
    vector<int>v;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    sum=0;
    for(i=0;i<n-1; i++)
        sum+=v[i];
    if(sum>=x)
        cout<<0<<endl;
    else{
        sum=0;
        for(i=1; i<n-1; i++)
            sum+=v[i];
        sum=x-sum;
        if(sum<=v[n-1] && sum<=100)
            cout<<sum<<endl;
        else{
            sum=0;
            for(i=1;i<n; i++ )
                sum+=v[i];
            if(sum>=x && v[n-1]<=100)
                cout<<v[n-1]<<endl;
            else
                cout<<-1<<endl;
        }
    }
}
