#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<int>binDec;

bool solve(int n){

  if(n==1)return true;

  bool isfound=false;
  for(int i : binDec){
    if(n%i==0){
      //cout<<i<<"\n";
      isfound=isfound||solve(n/i);
    }
    //return false||isfound;
  }
  return isfound;
}

int main(){
  int tc;
  cin>>tc;
  for(int i=2;i<100005;i++){
    int temp=i;
    bool isbin=true;
    while(temp>0){
      if(temp%10>1){
        isbin=false;
        break;
      }
      temp/=10;
    }
    if(isbin){
      //cout<<i<<"\n";
      binDec.push_back(i);
    }
  }
  //cout<<binDec.size();
  while(tc--){
    int n;cin>>n;
    if(solve(n))cout<<"YES\n";
    else cout<<"NO\n";
  }
  return 0;
}