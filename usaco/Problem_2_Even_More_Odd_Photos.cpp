#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin>>n;
    int arr[n];
    int even=0,odd=0,ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }

    while(odd>even){
        odd-=2;
        even++;
    }
    if(even>odd+1){
        even=odd+1;
    }
    ans=even+odd;
// got TLE in one case
    // while(even<=odd){
    //     if(even==odd){
    //         ans=even+odd;
    //     }else{
    //         odd-=2;
    //         even++;
    //     }     
    //     if(even-odd==1) ans=even+odd;
    //     //if(even-odd==2) ans=even+odd-1;

    // }
    // if(even-odd>=2){
    //     ans=odd+odd+1;
    // }
    // if(even==0 || odd==0) ans=1;

    cout<<ans<<"\n";

    return 0;
}