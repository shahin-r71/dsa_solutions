#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n,total=0;
    string s;
    cin>>s>>n;
    vector<int>a;
    vector<int>b(27);
    for(size_t i=0;i<s.length();i++){
      a.push_back((s[i]-'a'+1));
      total+=(s[i]-'a'+1);
    }
    sort(a.begin(),a.end());
    //cout<<total<<"\n";
    int k=a.size()-1;
    while(total>n){
      total-=a[k];
      b[a[k]]++;
      // b.push_back(a[k]-1+'a');
      // for(size_t q=0;q<s.length();q++){
      //   if(s[q]==(a[k]-1+'a')){
      //     s[q]='0';
      //     break;
      //   }
      // }
      k--;
    }

    // for(size_t j=0;j<b.length();j++){
    //   for(size_t k=0;k<s.length();k++){
    //     if(s[k]==b[j]){
    //       s[k]='0';
    //       break;
    //     }
    //   }
    // }
    //cout << "s after removal: ";
    for(size_t z=0;z<s.length();z++){
      if(b[s[z]-'a'+1]){
        b[s[z]-'a'+1]--;
      }else{
        cout<<s[z];
      }
      
    }
    cout<<"\n";
  }


  return 0;
}