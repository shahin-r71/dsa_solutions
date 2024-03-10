#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int t;
  cin>>t;
  while(t--){

    // approach 1
    // int x,y,diff=0,count=0;
    // cin>>x>>y;
    // int a[y+1]={0};
    // int indx=1;
    // for(int i=1;indx<=y && count<x;i++){
    //   a[indx]=1;
    //   count++;
    //   if((y-(indx+i))>=(x-count-1)){
    //     indx += i;
    //   }else{
    //     indx++;
    //   }
    // }

    // for(int j=1;j<=y;j++){
    //   if(a[j]==1){
    //     cout<<j<<" ";
    //   }
    // }
    // cout<<"\n";
    
    //better approach
    int n,k;
    cin>>k>>n;
    int ans=1,count=1;
    cout<<ans<<" ";
    for(int i=1;i<k;i++){
      if(n-(ans+i)>=(k-count-1)){
        ans+=i;
      }else{
        ans++;
      }
      count++;
      cout<<ans<<" ";
    }
    cout<<"\n";
  }


  return 0;
}