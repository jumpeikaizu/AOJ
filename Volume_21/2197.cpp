#include<iostream>
using namespace std;
int main(){
  int N;
  while(cin>>N){
    if(N==0) break;
    int count=0;
    for(int i=1;i<=N;i++){
      int sum=i;
      for(int j=i+1;j<=N;j++){
	sum+=j;
	if(sum==N) count++;
	if(sum>N) break;
      }
    }
    cout<<count<<endl;
  }
}
