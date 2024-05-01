#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll a,b,c,d,x,y;
    string s;
    cin>>s;
    string m="",n="",o="",p="";
    m+=s[0];n+=s[1];o+=s[3];p+=s[4];
    a=stoi(m);
    b=stoi(n);
    c=stoi(o);
    d=stoi(p);

    x=a*10+b;
    y=c*10+d;
    string xs="",ys="";
    if(x<=9)xs+="0";
    if(x>12 && (x-12)<=9) xs+="0";
    if(y<=9 && y>0) ys+="0";
    if(y==0) ys+="0";

    if(x<12 && x>0){
      cout<<xs<<x<<":"<<ys<<y<<" "<<"AM\n";
    }else if(x==12){
      cout<<x<<":"<<ys<<y<<" "<<"PM\n";
    }else if(x>12){
      cout<<xs<<(x-12)<<":"<<ys<<y<<" "<<"PM\n";
    }else{
      cout<<12<<":"<<ys<<y<<" "<<"AM\n";
    }
    //cout<<x<<" "<<y;
  }
  

  return 0;
}