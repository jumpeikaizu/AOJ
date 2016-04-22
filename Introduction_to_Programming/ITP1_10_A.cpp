#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
  double x1,y1,x2,y2,ans;
  cin>>x1>>y1>>x2>>y2;
  ans=sqrt(pow(y1-y2,2) + pow(x1-x2,2));
  cout<<fixed<<setprecision(6)<<ans<<endl;
}
