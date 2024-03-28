#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    vector<int>ar;
    for(int i=0;i<n;i++){
      cin>>a[i];
      if(i==0 || ar.back()!=a[i])ar.push_back(a[i]);
    }
    int ans=0;
    //couldn't find edge case/cases..
    // if(n>1){
    //   if(a[1]>a[0])ans++;
    //   if(a[n-1]<a[n-2])ans++;
    //   int l=1,r=1;
    //   while(r<n-1){
    //     if(a[l]==a[r+1]){
    //       r++;
    //     }else{
    //       if(a[l-1]>a[l] && a[r+1]>a[r]){
    //         ans++;
    //       }
    //       r++;
    //       l=r;
    //     }

    //   }
    //   if(ans>1){
    //     cout<<"NO\n";
    //   }else{
    //     cout<<"YES\n";
    //   }
    // }else if(n==1){
    //   cout<<"YES\n";
    // }
    
    for(int i=0;i<ar.size();i++){
      if((i==0 || ar[i-1]>ar[i]) && (i==ar.size()-1 || ar[i+1]>ar[i]))ans++;
    }
    if(ans>1){
      cout<<"NO\n";
    }else{
      cout<<"YES\n";
    }
  }


  return 0;
}