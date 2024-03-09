#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    map<int,int>arr2;
    for(int i=0;i<n;i++){     
        cin>>arr[i];       
    }
    
    for(int i=0;i<n;i++){
       if(arr2.count(m-arr[i])){
            cout<<i+1<<" "<<arr2[m-arr[i]]<<"\n";
            return 0;
       }
        arr2[arr[i]]=i+1;
    }
    cout<<"IMPOSSIBLE"<<"\n";
    return 0;
}
// 2 pointer solution is better than this solution..