#include<bits/stdc++.h>
using namespace std;

bool availabe[8][8];
bool works=true;
vector<int>q{0,1,2,3,4,5,6,7};
// for(int i=0;i<8;i++){ 
//     q.push_back(i);
// }

//iota(q.begin(),q.end(),0);
int ans=0;

int main(){

    string s[8];
    for(int i=0;i<8;i++){
        cin>>s[i];
        for(int j=0;j<8;j++){
            availabe[i][j]=(s[i][j]!='*');
        }
    }
    
    do{
        for(int i=0;i<8;i++){
            for(int j=i+1;j<8;j++){
                if(!availabe[i][q[i]] || !availabe[j][q[j]] || ((q[i]-i) == (q[j]-j)) || ((q[i]+i) == (q[j]+j))){
                    works=false;
                    break;                    
                }
            }
                
        }
        if(works){
            ans++;
        }
        works=true;
    }while(next_permutation(q.begin(),q.end()));

    cout<<ans<<"\n";

    return 0;
}