#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<pair<string,string>>cows_order;
   
    for(int i=0;i<n;i++){
        string s1,trash,s2;
        cin>>s1>>trash>>trash>>trash>>trash>>s2;
       cows_order.push_back(make_pair(s1,s2));
    }
    //sort(cows_order.begin(),cows_order.end());

    vector<string>s{"Bessie","Buttercup","Belinda","Beatrice","Bella","Blue","Betsy","Sue"};
    sort(s.begin(),s.end());

    do{
        bool works=true;
        for(auto co:cows_order){
           string p=co.first;
           string q=co.second;
           auto a=find(s.begin(),s.end(),p);
           auto b=find(s.begin(),s.end(),q);
            if(abs(a-b)!=1){
                works=false;
                break;                
            }
        }
        if(works){
            for(int k=0;k<8;k++){
                cout<<s[k]<<"\n";
            }
            break;
        }

    }while(next_permutation(s.begin(),s.end()));
    return 0;

}
