#include<iostream>
#include<cstdlib>
#include<cstring>
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
  Dice dice1,dice2;
  for(int i=0;i<6;i++){
    cin>>dice1.num[i];
  }
  for(int i=0;i<6;i++){
    cin>>dice2.num[i];
  }
  for(int i=0;i<100000;i++){
    if(memcmp(dice1.num,dice2.num,sizeof(dice1.num))==0){
      cout<<"Yes"<<endl;
      exit(0);
    }
    if(rand()%2==0) dice1.N();
    else dice1.E();
  }
  cout<<"No"<<endl;
}
