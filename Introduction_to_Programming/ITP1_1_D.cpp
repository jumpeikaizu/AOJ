#include<iostream>
using namespace std;
int main(){
  int S,h,m,s,temp;
  cin>>S;
  h=S/3600;
  temp=S%3600;
  m=temp/60;
  s=temp%60;
  cout<<h<<':'<<m<<':'<<s<<endl;
}
