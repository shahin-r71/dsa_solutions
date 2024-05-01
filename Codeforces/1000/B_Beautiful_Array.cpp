#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  ll t;cin>>t;
  while(t--){
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    // if((b*k)<=s){
    //   ll count=0;
    //   while((b*k)<=s){
    //     s-=(k-1);
    //     count++;
    //   }
    //   if(count){
    //     count--;
    //     s+=(k-1);
    //   }
    //   for(ll i=1;i<=(n-count-1);i++)cout<<0<<" ";
    //   for(ll i=0;i<count;i++)cout<<(k-1)<<" ";
    //   cout<<s<<"\n";
      
    // }else{
    //   cout<<-1<<"\n";
    // }

    ll arr[n]={0};
    arr[n-1]=(k*b);
    ll sum=arr[n-1];
    ll count= (s-(b*k))/(k);
    if(k>1)count= (s-(b*k))/(k-1);

    if((k*b)>s||(count>=n)){ 
      cout<<-1<<"\n";
    }else{
      for(ll i=1;i<=(n-count-1);i++)cout<<0<<" ";
      for(ll i=(n-count-1);i<n;i++){
          arr[i]+=min((s-sum),(k-1));
          sum+=arr[i];
          cout<<arr[i]<<" ";
      }
      cout<<"\n";
    }
    
  }


  return 0;
}