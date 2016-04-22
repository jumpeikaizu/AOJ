#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
  double a,b,C,S,L,h;
  cin>>a>>b>>C;
  double rad=C*M_PI/180.0;
  S=(a*b*sin(rad))/2;
  L=a+b+sqrt(a*a+b*b-2*a*b*cos(rad));
  h=b*sin(rad);
  cout<<fixed<<setprecision(6)<<S<<endl<<L<<endl<<h<<endl;
}
