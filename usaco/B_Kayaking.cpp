#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,idx1,idx2;
    cin>>n;
    int m=2*n;
    vector<int>peoples;
    int sum=1e9,max_dif=0;
    for(int i=0;i<m;i++){
        int w;
        cin>>w;
        peoples.push_back(w);
    }
    
    sort(peoples.begin(),peoples.end());

    for(int j=0;j<m-1;j++){
        for(int k=j+1;k<m;k++){
            vector<int>p2;int sum1=0;
            p2=peoples;
            int diff=p2[k]-p2[j];
            idx1=j;idx2=k;
            p2.erase(p2.begin()+idx2);
            p2.erase(p2.begin()+idx1);
            for(int l=0;l<m-3;l+=2){
                sum1+=(p2[l+1]-p2[l]);
            }
           sum=min(sum,sum1);
        }     
    }
    

    cout<<sum<<"\n";

    return 0;
}