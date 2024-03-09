#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  
  int t;
  cin>>t;
  while(t--){
    int n,ans=0;
    string s,a;
    cin>>n>>a;
    cin>>s;
    vector<int>indxa,indxg;
    for(int i=0;i<n;i++){
      if(s[i]==a[0])indxa.push_back(i+1);
      if(s[i]=='g')indxg.push_back(i+1);
    }
    for(size_t i=0;i<indxa.size();i++){
      int ansTemp=1e9;
      for(size_t j=0;j<indxg.size();j++){
        if(indxg[j]>=indxa[i]){
          ansTemp = min(ansTemp, (indxg[j] - indxa[i]));
        }else{
          ansTemp = min(ansTemp, (indxg[j] - indxa[i] + n));
        }
      }
      ans=max(ans,ansTemp);
    }
    cout<<ans<<"\n";
  }

  return 0;
}