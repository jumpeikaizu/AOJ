#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  while(cin>>s){
    if(s == "0") break;
    int ans=0;
    for(int i=0;i<s.size();i++){
      ans += s[i] - '0';
    }
    cout<<ans<<endl;
  }
}
