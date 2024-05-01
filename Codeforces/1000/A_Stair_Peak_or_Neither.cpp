#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    if(a<b && b<c){
      cout<<"STAIR\n";
    }else if(a<b && c<b){
      cout<<"PEAK\n";
    }else{
      cout<<"NONE\n";
    }
  }


  return 0;
}