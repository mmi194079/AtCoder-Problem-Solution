#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,count=0;
    cin>>N;
    int P[N];
    for(int i=0;i<N;i++){
        cin>>P[i];
    }
    int temp=P[0];
    int temp1=P[0];
    for(int i=0;i<N;i++){
        if (temp<P[i]){
            temp=P[i];

        }

    }


    //cout<<temp;
    if(temp1<temp){
        cout<<temp-temp1+1;
    }
    else{
            int c=0;
        for(int i=0; i<N; i++)
        {
            if(temp==P[i])
                 c++;
        }
    if(c>1)
        cout<<1<<endl;
    else
        cout<<0<<endl;
    }
}
