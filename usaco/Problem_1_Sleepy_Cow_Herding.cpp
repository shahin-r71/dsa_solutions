#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int x,y,z,minimum,maximum;
    cin>>x>>y>>z;
    vector<int>cows;
    cows.push_back(x);
    cows.push_back(y);
    cows.push_back(z);

    sort(cows.begin(),cows.end());

    int minDiff=min(cows[1]-cows[0],cows[2]-cows[1]);
    int maxDiff=max(cows[1]-cows[0],cows[2]-cows[1]);

    if(minDiff==2){
        minimum=1;
    }else if(maxDiff>2){
        minimum=2;
    }else{
        minimum=0;
    }

    maximum=maxDiff-1;

    cout<<minimum<<"\n"<<maximum<<"\n";

    return 0;
}