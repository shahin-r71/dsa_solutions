#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i] && s1[i+1]==s2[i+1]) ans++;
    }
    
    cout<<ans<<"\n";

    return 0;
}