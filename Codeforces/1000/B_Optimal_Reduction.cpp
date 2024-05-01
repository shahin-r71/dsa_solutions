#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int tc;
  for(cin>>tc;tc--;){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    int prelen=1;
    while(prelen<n && a[prelen-1]<=a[prelen])prelen++;
    int suflen=1;
    while(suflen<n && a[n-suflen]<=a[n-suflen-1])suflen++;

    if(prelen+suflen>=n)cout<<"YES\n";
    else cout<<"NO\n";
  }

  return 0;
}

// int main(){
//   ll t;
//   cin>>t;
//   while(t--){
//     ll n,minVal=1e9;
//     cin>>n;
//     ll arr[n];
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//       if(arr[i]<minVal)minVal=arr[i];
//     }
//     // cout<<minVal;
//     ll ans=minVal;
//     for(int j=0;j<n;j++){
//       if(j==0 || arr[j]==minVal){
//         ans+=(arr[j]-minVal);
//         // cout << ans;
//       }else if(arr[j]>arr[j-1]){
//         ans+=(arr[j]-arr[j-1]);
//         // cout << ans;
//       }
//     }
//     // cout << ans;
//     sort(arr,arr+n);
//     ll ans2=arr[n-1];
//     // for(int j=1;j<n;j++){
//     //   ans2+=(arr[j]-arr[j-1]);
//     // }
//     // cout<<ans<<" "<<ans2;
//     if(ans==ans2){
//       cout<<"YES\n";
//     }else{
//       cout<<"NO\n";
//     }
//   }


//   return 0;
// }
