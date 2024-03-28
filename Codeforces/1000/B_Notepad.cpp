#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool isPos=false;
    if(n<=3){
      cout<<"NO"<<"\n";
    }else{
      //my solution
      // for(int i=0;i<n-2;i++){
      //   for(int j=i+2;j<n-1;j++){
      //     if(s[i]==s[j]&&s[i+1]==s[j+1]){
      //       isPos=true;
      //     }
      //   }
      //   if(isPos){
      //     cout<<"YES\n";
      //     break;
      //   }
      // }
      // if(!isPos)cout<<"NO\n";

      map<string,int>sm;
      for(int i=0;i<n-1;i++){
        string newStr=s.substr(i,2);

        if(sm.find(newStr)==sm.end()){
          sm[newStr]=i;
        }else{
          if(sm[newStr]==i-1){
            continue;
          }else{
            isPos=true;
            break;
          }
        }
        
      }
      if(isPos){
        cout<<"YES\n";
      }else{
        cout<<"NO\n";
      }
    }
  }

    return 0;
}