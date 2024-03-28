#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    //approach 1. verdict-tle
  //   for(int i=0;i<n-1;i++){
  //     map<int,int>a,b;
  //     int uniqueA=0,uniqueB=0;
  //     for(int j=i+1;j<n;j++){
  //       b[s[j]-'a']=1;
  //     }
  //     for(int k=0;k<=i;k++){
  //       a[s[k]-'a']=1;
  //     }
  //     for(const auto& pair : a){
  //       if(pair.second==1)uniqueA++;
  //     }
  //     for(const auto& pair : b){
  //       if(pair.second==1)uniqueB++;
  //     }
  //     //cout<<uniqueA<<" "<<uniqueB<<"\n";
  //     ans=max(ans,(uniqueA+uniqueB));
  //   }
  //   cout<<ans<<"\n";
  // }
  map<char,int>a,b;
  vector<int>as,bs;
  for(int i=0;i<n-1;i++){
    a[s[i]]=1;
    as.push_back(a.size());
  }
  for(int j=n-1;j>0;j--){
    b[s[j]]=1;
    bs.push_back(b.size());
  }
  for(int k=0;k<n-1;k++){
    ans=max(ans,(as[k]+bs[n-2-k]));
  }
  cout<<ans<<"\n";

  }
  return 0;
}