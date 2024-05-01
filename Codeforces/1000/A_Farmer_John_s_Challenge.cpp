#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    if(n==k){
      for(ll i=1;i<=n;i++)cout<<1<<" ";
    }else if(k==1){
      for(ll i=1;i<n;i++)cout<<1<<" ";
      cout<<2;
    }else{
      cout<<-1;
    }
    cout<<"\n";
  }

  return 0;
}