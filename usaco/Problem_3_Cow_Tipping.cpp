#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin>>n;
    vector<vector<char>>c(n,vector<char>(n));
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            cin>>c[j][k];
        }
    }
    int ans=0;

    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(c[i][j]=='1'){
                ans++;
                for(int k=0;k<=i;k++){
                    for(int l=0;l<=j;l++){
                        if(c[k][l]=='1'){
                            c[k][l]='0';
                        }else{
                            c[k][l]='1';
                        }
                    }
                }
            }
        }
    }

    cout<<ans<<"\n";
    return 0;
}