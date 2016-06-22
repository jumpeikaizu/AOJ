#include<iostream>
#include<vector>
using namespace std;
int H,total;
vector<vector<int> > board;
bool eval(){
  bool flag = true;
  for(int i=0;i<H;i++){
	int count=1,pre=0,index=-1,num=0;
	for(int j=0;j<5;j++){
	  if(j>0 && pre==board[i][j] && board[i][j]){
		count++;
		if(count>=3){
		  index=j;
		  num=count;
		}
	  }
	  else
		count=1;
	  pre=board[i][j];
	}
	if(num>=3){
	  total+=board[i][index]*num;
	  for(int j=0;j<num;j++)
		board[i][index-j] = 0;
	  flag=false;
	}
  }
  if(flag) return flag;
  
  for(int i=H-1;i>0;i--){
	for(int j=0;j<5;j++){
	  if(board[i][j]==0){
		for(int k=i-1;k>=0;k--){
		  if(board[k][j]!=0){
			board[i][j] = board[k][j];
			board[k][j] = 0;
			break;
		  }
		}
	  }
	}
  }
  /*
  for(int i=0;i<H;i++){
	for(int j=0;j<5;j++){
	  cout<<board[i][j]<<" ";
	}
	cout<<endl;
  }
  cout<<endl;
  */
  return flag;
}

int main(){
  int temp;
  while(cin>>H,H){
	board.clear();
	total = 0;
	board.resize(H);
	for(int i=0;i<H;i++){
	  for(int j=0;j<5;j++){
		cin>>temp;
		board[i].push_back(temp);
	  }
	}
	while(!eval()){continue;}
	cout<<total<<endl;
  }
  return 0;
}
