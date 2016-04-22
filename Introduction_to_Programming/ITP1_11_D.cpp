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
  int n;
  cin>>n;
  Dice dice[n];
  for(int i=0;i<n;i++){
    for(int j=0;j<6;j++){
      cin>>dice[i].num[j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=0;k<1000;k++){
	if(memcmp(dice[i].num,dice[j].num,sizeof(dice[0].num))==0){
	  cout<<"No"<<endl;
	  exit(0);
	}
	if(rand()%2==0) dice[i].N();
	else dice[i].E();
      }
    }
  }
  cout<<"Yes"<<endl;
}
