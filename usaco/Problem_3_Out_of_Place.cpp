#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        arr2[i]=arr1[i];
    }
    sort(arr2,arr2+n);
    vector<int>unsorted;
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            unsorted.push_back(arr1[i]);
        }
    }
    int swaps=0;
    for(int i=0;i<unsorted.size();i++){
        for(int j=0;j<unsorted.size()-1;j++){
            if(unsorted[j]>unsorted[j+1]){
                swap(unsorted[j],unsorted[j+1]);
                swaps++;
            }
        }
    }

    cout<<swaps<<"\n";
    return 0;
}