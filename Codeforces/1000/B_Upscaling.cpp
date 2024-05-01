#include<bits/stdc++.h>
using namespace std;

#define ll long long

void printHas(){
  cout<<"##";
}
void printDot(){
  cout<<"..";
}

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll rowNum=0;
    bool hasFirst=true;
    for(ll i=0;i<(2*n);i++){
      if(hasFirst){
        for(ll j=0;j<n;j++){
          if(j%2==0){
            printHas();
          }else{
            printDot();
          }
        } 
      }else{
        for(ll j=0;j<n;j++){
          if(j%2==0){
            printDot();
          }else{
            printHas();
          }
        }
      }
      cout<<"\n";
      rowNum++;
      if(rowNum==2){
        rowNum=0;
        hasFirst = !hasFirst;
      }
    }



    // ll n,nHas=0,nDot=0,colnum=0;
    // bool hasFirst=true;
    // cin>>n;
    // ll dn=2*n;
    // // char arr[dn][dn];
    // vector<char>arr[dn];
    // for(ll i=0;i<dn;i++){
    //   for(ll j=0;j<dn;j++){
    //     if(hasFirst){
    //       if(nHas<2){
    //       //arr[i][j]='#';
    //       // arr[i].push_back('#');
    //       cout<<"#";
    //       nHas++;
    //       }else if(nDot<2){
    //       // arr[i][j]='.';
    //       // arr[i].push_back('.');
    //       cout << ".";
    //       nDot++;
    //       }else{
    //       nHas=0;
    //       nDot=0;
    //       }
    //     }else{
    //       if(nDot<2){
    //       // arr[i][j]='.';
    //       // arr[i].push_back('.');
    //       cout << ".";
    //       nDot++;
    //       }else if(nHas<2){
    //       // arr[i][j]='#';
    //       // arr[i].push_back('#');
    //       cout<<"#";
    //       nHas++;
    //       }else{
    //       nHas=0;
    //       nDot=0;
    //       }
    //     }
    //   }
    //   colnum++;
    //   if(colnum==2){
    //     hasFirst=!hasFirst;
    //     colnum=0;
    //   }
    //   cout<<"\n";
    // }
    // // for(int i=0;i<dn;i++){
    // //   for(int j=0;j<dn;j++){
    // //     cout<<arr[i][j];
    // //   }
    // //   cout<<"\n";
    // // }
    // // cout<<"\n";
  }


  return 0;
}