#include<bits/stdc++.h>

using namespace std;

void swap(char *x, char *y){
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
set<string> perms;
void permute(char *s, int l,int r){
    if(l+1==r){

        perms.insert(s);
        return;
        //cout<<s<<"\n";
    }else{
        for(int i=l;i<r;i++){
            swap((s+l),(s+i));
            permute(s,l+1,r);
            swap((s+l),(s+i));

        }
        
    }
}

int main(){

// Method 1
char s[8];

cin>>s;
int r=strlen(s);
permute(s,0,r);

cout<<perms.size()<<"\n";
for(const auto &perm:perms){
   cout<<perm<<"\n";
}


// Easy Method

    // long long ans=0;
    // vector<string>perms;
    // string s;
    // cin>>s;
    // sort(s.begin(),s.end());

    // do{
    //     ans++;
    //     perms.push_back(s);

    // }while(next_permutation(s.begin(),s.end()));

    // cout<<ans<<"\n";
    // for(int i=0;i < perms.size();i++){
    //     cout<<perms[i]<<"\n";
    // }
    return 0;
}








// <---TAKEWAYS--->

// 1.In range base for loop its better to use const auto as return type as this value won't change
    // also use & before each return value as it returns a pointer every time
    
// 2. Set contains unique values in ascending order(or descending order)

// 3.next_permutation returns true untill the highest permutation sequence is achieved  


// MISTAKES:

// 1. forgot to return from recursion
// 