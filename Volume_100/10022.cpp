#include<iostream>
#include<string>
using namespace std;
int main(){
  int count=0;
  string W,T;
  cin>>W;
  for(int i=0;i<W.length();i++){
    if(isupper(W[i])) W[i]=tolower(W[i]);
  }
  while(cin>>T){
    if(T=="END_OF_TEXT") break;
    for(int i=0;i<T.length();i++){
      if(isupper(T[i])) T[i]=tolower(T[i]);
    }
    if(T==W) count++;
  }
  cout<<count<<endl;
}
