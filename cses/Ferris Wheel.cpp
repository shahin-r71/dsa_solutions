#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  ll n,x,ans=0;
  cin>>n>>x;
  ll arr[n];
  for(ll i=0;i<n;i++)cin>>arr[i];
  sort(arr,arr+n);
  ll l=0,r=n-1,cur=arr[l]+arr[r];

  while(l<=r){
    if(cur>x){
      ans++;
      r--;
      cur=arr[l]+arr[r];
      
    }else{  
      r--;l++;
      ans++;
      cur=arr[l]+arr[r];
    }
  }

  cout<<ans<<"\n";

  return 0;
}

