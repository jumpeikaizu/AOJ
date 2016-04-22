#include<iostream>
#include<string>
using namespace std;
int main(){
  string str,temp,left,right;
  int m,h;
  while(cin>>str){
    if(str=="-") break;
    cin>>m;
    for(int i=0;i<m;i++){
      cin>>h;
      left=str.substr(0,h);
      right=str.substr(h,str.length());
      temp=right+left;
      str=temp;
    }
    cout<<str<<endl;
  }
}
