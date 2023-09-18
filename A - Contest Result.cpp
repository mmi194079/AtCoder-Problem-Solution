#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n,m,a,b,sum=0;
        cin>>n>>m;
        vector<int>v;
        vector<int>v1;

        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }

//        for(int i=0;i<m;i++){
//            cin>>b;
//            v1.push_back(b);
//        }

        for(int i=0;i<m;i++){
             cin>>b;
             for(int j=0;j<n;j++){
                if((j+1)==b){
                    sum+=v[j];
                    break;
                }
             }


        }

        cout<<sum;

}
