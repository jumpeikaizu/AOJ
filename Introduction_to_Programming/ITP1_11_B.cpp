#include<iostream>
#include<string>
#include<cstdlib>
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
  for(int i=0;i<6;i++){
    cin>>dice.num[i];
  }
  int q,ue,mae;
  cin>>q;
  for(int i=0;i<q;i++){
    cin>>ue>>mae;
    while(!(ue==dice.num[0]&&mae==dice.num[1])){
      if(rand()%2==0) dice.N();
      else dice.E();
    }
    cout<<dice.num[2]<<endl;
  }
}
