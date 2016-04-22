#include<iostream>
#include<string>
using namespace std;

class Dice{
public:
  int num[6];
  void N(){
    int n=num[0];
    num[0]=num[1];
    num[1]=num[5];
    num[5]=num[4];
    num[4]=n;
  };
  void S(){
    int n=num[0];
    num[0]=num[4];
    num[4]=num[5];
    num[5]=num[1];
    num[1]=n;
  };
  void E(){
    int n=num[0];
    num[0]=num[3];
    num[3]=num[5];
    num[5]=num[2];
    num[2]=n;
  };
  void W(){
    int n=num[0];
    num[0]=num[2];
    num[2]=num[5];
    num[5]=num[3];
    num[3]=n;
  };
};

int main(){
  Dice dice;
  string s;
  for(int i=0;i<6;i++){
    cin>>dice.num[i];
  }
  cin>>s;
  for(unsigned long i=0;i<s.length();i++){
    if(s[i]=='N') dice.N();
    else if(s[i]=='S') dice.S();
    else if(s[i]=='E') dice.E();
    else if(s[i]=='W') dice.W();
  }
  cout<<dice.num[0]<<endl;
} 
