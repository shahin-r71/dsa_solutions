#include<bits/stdc++.h>
using namespace std;

#define ll long long
int cows[3][3];

int check_if_wins_1(char ch){
    if(cows[0][0]==ch&&cows[1][1]==ch&&cows[2][2]==ch)return 1;
    if(cows[0][2]==ch&&cows[1][1]==ch&&cows[2][0]==ch)return 1;

    for(int i=0;i<3;i++){
        if(cows[i][0]==ch&&cows[i][1]==ch&&cows[i][2]==ch)return 1;
        if(cows[0][i]==ch&&cows[1][i]==ch&&cows[2][i]==ch)return 1;
    }
    return 0;
}
bool check_3(char ch1,char ch2,char a,char b,char c){
    if(a!=ch1 && a!=ch2)return false;
    if(b!=ch1 && b!=ch2)return false;
    if(c!=ch1 && c!=ch2)return false;
    if(a!=ch1 && b!=ch1 && c!=ch1)return false;
    if(a!=ch2 && b!=ch2 && c!=ch2)return false;

    return true;
}

int check_if_wins_2(char c1,char c2){
    if(check_3(c1,c2,cows[0][0],cows[1][1],cows[2][2]))return 1;
    if(check_3(c1,c2,cows[0][2],cows[1][1],cows[2][0]))return 1;

    for(int i=0;i<3;i++){
        if(check_3(c1,c2,cows[i][0],cows[i][1],cows[i][2]))return 1;
        if(check_3(c1,c2,cows[0][i],cows[1][i],cows[2][i]))return 1;
    }

    return 0;
}

int main(){
    int ans1=0,ans2=0;
    for(int i=0;i<3;i++){
        string s;cin>>s;
        for(int j=0;j<3;j++){
            cows[i][j]=s[j];
        }
    }

    for(char i='A';i<='Z';i++){
        ans1+=check_if_wins_1(i);
    }
    for(char i='A';i<='Z';i++){
        for(char j=i+1;j<='Z';j++){
            ans2+=check_if_wins_2(i,j);
        }
    }
    cout<<ans1<<"\n"<<ans2<<"\n";
    return 0;
}