#include<bits/stdc++.h>

using namespace std;

int main(){

    long long n,sum=0,min_dif=1e9;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    for(int i=0;i<(1<<n);i++){
        long long temp_sum=0;
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                temp_sum+=arr[j];
            }
        }
        min_dif=min(min_dif,abs(2*temp_sum-sum));
    }
    cout<<min_dif<<"\n";
    return 0;
}