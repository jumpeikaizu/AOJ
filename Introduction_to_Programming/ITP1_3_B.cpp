#include <iostream>
using namespace std;

int main(){
  int temp;
  int i=1;
  while(cin>>temp){
    if(temp==0) break;
    cout<<"Case "<<i++<<": "<<temp<<endl;
  }
}
