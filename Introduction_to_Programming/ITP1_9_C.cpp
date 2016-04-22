#include<iostream>
#include<string>
using namespace std;
int main(){
  int n,tp=0,hp=0;
  cin>>n;
  string tc,hc;
  for(int i=0;i<n;i++){
    cin>>tc>>hc;
    if(tc>hc) tp += 3;
    else if(tc<hc) hp += 3;
    else{tp += 1; hp += 1;}
  }
  cout<<tp<<' '<<hp<<endl;
}
