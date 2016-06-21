#include<iostream>
using namespace std;
int main(){
  int x,y,s;
  while(cin>>x>>y>>s,x&&y&&s){
	int max=-1;
	for(int i=1;i<=s/2;i++){
	  for(int j=i;j<=s;j++){
		int a=(i*(100+x))/100;
		int b=(j*(100+x))/100;
		if(s==a+b){
		  a=(i*(100+y))/100;
		  b=(j*(100+y))/100;
		  if(max<a+b)
			max=a+b;
		}
	  }
	}
	cout<<max<<endl;
  }
  return 0;
}
