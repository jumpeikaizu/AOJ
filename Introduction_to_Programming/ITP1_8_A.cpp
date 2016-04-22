#include <iostream>
#include <cctype>
using namespace std;

int main(){
  char c;
  while(cin.get(c)){
    if(c=='\n'){
      cout<<endl;
      break;
    }
    if(islower(c)){
      c=toupper(c);
      cout<<c;
    }
    else if(isupper(c)){
      c=tolower(c);
      cout<<c;
    }
    else cout<<c;
  }
}
    
