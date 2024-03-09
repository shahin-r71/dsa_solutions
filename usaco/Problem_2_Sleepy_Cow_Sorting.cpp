#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n,ans=0;
    cin>>n;
    int arr[n],arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    sort(arr2,arr2+n);

    for(int i=0;i<n;i++){
        if(arr[i]!=arr2[i]){
            ans=i;
        }
    }

    if(ans==0){
        cout<<ans<<"\n";
        return 0;
    }

    cout<<ans<<"\n";

    return 0;
}