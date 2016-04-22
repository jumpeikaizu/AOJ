#include<iostream>
using namespace std;

int main(){
  bool card[4][13]={false};
  int n; cin>>n;
  char suit;
  int num;
  for(int i=0;i<n;i++){
    cin>>suit>>num;
    if(suit=='S') card[0][num-1]=true;
    else if(suit=='H') card[1][num-1]=true;
    else if(suit=='C') card[2][num-1]=true;
    else if(suit=='D') card[3][num-1]=true;
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<13;j++){
      num=j+1;
      if(card[i][j]==false){
	if(i==0) cout<<'S'<<' '<<num<<endl;
	else if(i==1) cout<<'H'<<' '<<num<<endl;
	else if(i==2) cout<<'C'<<' '<<num<<endl;
	else if(i==3) cout<<'D'<<' '<<num<<endl;
      }
    }
  }
}
  
      
