#include<iostream>
using namespace std;
int main(){
  int n;
  long long a,sum=0,maxa=-1000000,mina=1000000;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
    mina=min(mina,a);
    maxa=max(maxa,a);
    sum+=a;
  }
  cout<<mina<<' '<<maxa<<' '<<sum<<endl;
}
    
