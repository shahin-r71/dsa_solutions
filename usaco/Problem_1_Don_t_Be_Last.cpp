#include<bits/stdc++.h>
using namespace std;

#define ll long long

int cows[7];
map<int,string>ans;
int main(){
    int n;
    cin>>n;
    for(int j=0;j<n;j++){
        string s;int t;
        cin>>s>>t;
        if(s=="Bessie")cows[0]+=t;
        if(s=="Elsie")cows[1]+=t;
        if(s=="Daisy")cows[2]+=t;
        if(s=="Gertie")cows[3]+=t;
        if(s=="Annabelle")cows[4]+=t;
        if(s=="Maggie")cows[5]+=t;
        if(s=="Henrietta")cows[6]+=t;
    }
    if(cows[0]>0)ans[cows[0]]="Bessie";
    if(cows[1]>0)ans[cows[1]]="Elsie";
    if(cows[2]>0)ans[cows[2]]="Daisy";
    if(cows[3]>0)ans[cows[3]]="Gertie";
    if(cows[4]>0)ans[cows[4]]="Annabelle";
    if(cows[5]>0)ans[cows[5]]="Maggie";
    if(cows[6]>0) ans[cows[6]]="Henrietta";


    auto it=ans.begin();
    if(n>1)it++;
    if(it!=ans.end()){
        cout<<it->second<<"\n";
    }else{
        cout<<"Tie"<<"\n";
    }
    
    return 0;
}