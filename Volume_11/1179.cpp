#include<iostream>
using namespace std;
int main(){
  int n,ans;
  int Y,M,D;
  cin>>n;
  for(int i=0;i<n;i++){
	ans=0;
	cin>>Y>>M>>D;
	for(int j=Y+1;j<1000;j++){
	  if(j%3==0) ans+=20*10;
	  else ans+=20*5+19*5;
	}
	for(int j=M+1;j<=10;j++){
	  if(Y%3==0) ans+=20;
	  else if(j%2==1) ans+=20;
	  else if(j%2==0) ans+=19;
	}
	if(Y%3==0 || M%2==1) ans+=20-D+1;
	else if(M%2==0) ans+=19-D+1;
	cout<<ans<<endl;
  }
  return 0;
}
