#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    //ll p[n]={0};
    //p[0]=1;
    vector<ll>ans;
    ll answer[2*n+1]={0};

    // tle on test case 11
    for(ll i=0;i<n;i++){
      bool isfound = false;
      for(ll k=0;k<=(n+a[i]) && !isfound;k++){ 
          if(answer[k]==0){
            if((k-a[i])>=0 && (k-a[i])<n && !answer[k-a[i]]){
              //ans.push_back((k-a[i]));
              cout<<(k-a[i])<<" ";
              answer[(k-a[i])]=1;
              isfound=true;
          }
        }
      }


      // tle on test case 4

      //cout<<i<<"\n";
      // for(ll j=0;(j-a[i])<=n;j++){ 
      //   bool nonNeg=true;
      //   for(size_t k=0;k<ans.size();k++){
      //     if(ans[k]==j)nonNeg=false;
      //   }
      //   ll p_i=j-a[i];
      //   //cout<<i<<" "<<p_i<<"\n";
      //   if(p_i>=0 && p_i<n && !p[p_i] && nonNeg){
      //     ans.push_back(p_i);
      //     p[p_i]=1;
      //     //cout<<"\n";
      //     break;
      //   }
      // }
    }
    //for(size_t i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    cout<<"\n";
  }


  return 0;
}