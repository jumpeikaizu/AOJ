//Prime Numbers
#include<iostream>
#include<cmath>
using namespace std;
bool prime(int num);
int main(){
  int n,count=0,num;
  cin>>n;
  for(int i=0;i<n;i++){
	cin>>num;
	if(prime(num)) count++;
  }
  cout<<count<<endl;
  return 0;
} 

bool prime(int num){
  if(num==2)
	return true;
  else if(num<2 || num%2==0)
	return false;
  else{
	int temp=1;
	while(temp=temp+2,temp<=sqrt(num)){
	  if(num%temp==0)
		return false;
	}
  }
  return true;
}
