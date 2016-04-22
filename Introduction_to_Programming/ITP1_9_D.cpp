#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s,order,p;
  cin>>s;
  int q,a,b;
  cin>>q;
  for(int i=0;i<q;i++){
    cin>>order>>a>>b;
    if(order=="print")
      cout<<s.substr(a,b-a+1)<<endl;
    else if(order=="reverse")
      reverse(s.begin()+a,s.begin()+b+1);
    else if(order=="replace"){
      cin>>p;
      s.replace(a,b-a+1,p);
    }
  }
}
