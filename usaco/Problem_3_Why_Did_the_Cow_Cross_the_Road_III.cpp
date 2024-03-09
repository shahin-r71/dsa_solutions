#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    vector<pair<ll,ll>>arive_duration;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll m,n;
        cin>>m>>n;
        arive_duration.push_back(make_pair(m,n));
    }
    sort(arive_duration.begin(),arive_duration.end());

    ll ans=0;

    for(int j=0;j<n;j++){
        if(ans<arive_duration[j].first){
            ans=arive_duration[j].first+arive_duration[j].second;
        }else{
            ans+=arive_duration[j].second;
        }
    }
    cout<<ans<<"\n";
    return 0;
}