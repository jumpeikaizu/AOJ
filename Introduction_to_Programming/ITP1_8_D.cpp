#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
  char s[201],p[101],c[101];
  cin>>s>>p;
  strcpy(c,s);
  strcat(s,c);
  if(strstr(s,p)==NULL) cout<<"No"<<endl;
  else cout<<"Yes"<<endl;
}
