#include<bits/stdc++.h>
using namespace std;

#define LL long long
int main(){
    LL x,a,b,c;
    set<LL>ans;
    cin>>a>>b>>c;
    for(int i=1;i<82;i++){
        x=b*((LL)(pow(i,a)))+c;
        //cout<<x<<" ";
        LL x1=x,temp=0;
        while(x1>0){
            temp+=(x1%10);
            x1/=10;
        }
       // cout<<temp<<"\n";
        if(temp==i && x>0 && x<1e9){
            ans.insert(x);
        } 
    }

    cout<<ans.size()<<"\n";
    for(auto it=ans.begin();it!=ans.end();it++){
        cout<<*it<<" ";
    }


    return 0;
}