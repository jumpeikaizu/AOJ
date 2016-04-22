#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct date{
  string s_name;
  double s_time;
};

int comp(string s1,string s2);

int main(){
  int N;
  string L;
  int P,A,B,C,D,E,F,S,M;
  while(cin>>N){
    if(N==0)break;
    vector<date> sakumotu(N);
    for(int i=0;i<N;i++){
      cin>>L>>P>>A>>B>>C>>D>>E>>F>>S>>M;
      sakumotu[i].s_name=L;
      int money=S*F*M-P;
      int time=A+B+C;
      for(int j=0;j<M;j++){
	time+=D+E;
      }
      sakumotu[i].s_time=(double)money/(double)time;
    }
    vector<date> temp(1);
    vector<string>(n);
    for(int i=0;i<N;i++){
      temp[0]=sakumotu[i];
      int min=i;
      for(int j=i+1;j<N;j++){
	if(temp[0].s_time < sakumotu[j].s_time){
	  temp[0]=sakumotu[j];
	  min=j;
	}
	if(temp[0].s_time==sakumotu[j].s_time){
	  
      }
      sakumotu[min]=sakumotu[i];
      sakumotu[i]=temp[0];
    }
    for(int i=0;i<N;i++){
      cout<<sakumotu[i].s_name<<endl;
    }
    cout<<"#"<<endl;

  }
}
