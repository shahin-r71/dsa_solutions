#include<bits/stdc++.h>
using namespace std;
vector<int>unique_arr;

set<int>s;
int main(){
    int n,m;
    cin>>n;
   
    for(int i=0;i<n;i++){
        cin>>m;
        s.insert(m);
        //unique_arr.push_back(m);     
    }
    cout<<s.size()<<"\n";
    // sort(unique_arr.begin(),unique_arr.end());
   
    // for(int i=0;i<n-1;i++){
    //     if(unique_arr[i]==unique_arr[i+1]){
    //         unique_arr.erase(unique_arr.begin()+i);
    //         i--;
    //         n--;
    //     }
    // }    
    // cout<<unique_arr.size()<<"\n";
    return 0;
}