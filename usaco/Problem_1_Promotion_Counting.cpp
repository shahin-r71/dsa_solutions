#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int start[4],end[4],ans[3],temp;
    for(int i=0;i<4;i++){
        cin>>start[i]>>end[i];
    }
    for(int j=3;j>0;j--){
        temp=end[j]-start[j];
        ans[j-1]=temp;
        start[j-1]-=temp;
    }
    for(int res=0;res<3;res++){
        cout<<ans[res]<<"\n";
    }

    return 0;
}