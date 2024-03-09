#include<bits/stdc++.h>
using namespace std;

#define ll long long

int gotTheBall[100],ballPassedto[100];

int main(){
    int n,ballsneeded=0;
    cin>>n;
    int cows[n];
    for(int i=0;i<n;i++){
        cin>>cows[i];
    }
    sort(cows,cows+n);
    if(n<=2){
        cout<<1<<"\n";
        return 0;
    }

    ballPassedto[0]=1;ballPassedto[n-1]=n-2;
    gotTheBall[1]=gotTheBall[n-2]=1;

    for(int i=1;i<n-1;i++){
        if(cows[i]-cows[i-1]<=cows[i+1]-cows[i]){
            gotTheBall[i-1]++;
            ballPassedto[i]=i-1;
        }else{
            gotTheBall[i+1]++;
            ballPassedto[i]=i+1;
        }
    }
    
    for(int j=2;j<n-3;j++){
        if(cows[j+1]-cows[j]<cows[j]-cows[j-1] && cows[j+1]-cows[j]<=cows[j+2]-cows[j+1] && ballPassedto[j-1]!=j && ballPassedto[j+2]!=j+1){
            ballsneeded++;
        }
    }
    if(cows[1]-cows[0]<=cows[2]-cows[1] && ballPassedto[2]!=1) ballsneeded++;
    if(cows[n-1]-cows[n-2]<=cows[n-2]-cows[n-3] && ballPassedto[n-3]!=n-2) ballsneeded++;


    for(int i=0;i<n;i++){
        if(gotTheBall[i]==0) ballsneeded++;
    }

    cout<<ballsneeded<<"\n";
    return 0;
}