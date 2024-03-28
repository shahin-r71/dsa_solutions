#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m,x,y,d;
    cin>>n>>m>>x>>y>>d;
    

    // missed edge case
    // int topDis=x-1,bottomDis=n-x,sideDis=m-y,oppSideDis=y-1;
    // if(topDis<=d && bottomDis<=d){
    //   cout<<-1<<"\n";
    // }else if(topDis>d && bottomDis<=d && sideDis<=d){
    //   cout<<-1<<"\n";
    // }else if(bottomDis>d && topDis<=d && oppSideDis<=d){
    //   cout<<-1<<"\n";
    // }else if((n-x)+(m-y)<=d){
    //   cout<<-1<<"\n";
    // }else{
    //   cout<<(n-1)+(m-1)<<"\n";
    // }
    int topDis = x - 1, bottomDis = n - x, sideDis = m - y, oppSideDis = y - 1;
    if(topDis>d && sideDis>d){
      cout<<(n-1)+(m-1)<<"\n";
    }else if(bottomDis>d && oppSideDis>d){
      cout<<(n-1)+(m-1)<<"\n";
    }else{
      cout << -1 << "\n";
    }

    //so the logic was correct but the implementation some how messed up
  }
  return 0;
}