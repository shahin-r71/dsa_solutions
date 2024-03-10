#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  
  int n,ans=0;
  cin>>n;
  //approach 1

  // while(n>0){
  //   ans+=(n%2);
  //   n/=2;
  // }

  //approach 2-bitmasking
  int mask=1;
  for(int i=0;i<32;i++){
    if(n&(mask<<i))ans++;
  }
  cout<<ans<<"\n";

  return 0;
}