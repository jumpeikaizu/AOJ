#include<iostream>
using namespace std;

int main(){
  int m,f,r;
  while(cin>>m>>f>>r){
    if(m==-1&&f==-1&&r==-1) break;
    int mf=m+f;
    if(m==-1||f==-1||mf<30) cout<<'F'<<endl;
    else if(mf>=80) cout<<'A'<<endl;
    else if(mf>=65&&mf<80) cout<<'B'<<endl;
    else if((mf>=50&&mf<65)||(mf>=30&&mf<50&&r>=50)) cout<<'C'<<endl;
    else if(mf>=30&&mf<50) cout<<'D'<<endl;
  }
}
