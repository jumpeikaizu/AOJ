#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
  int n;
  double d1=0.0,d2=0.0,d3=0.0,dinf=0.0;
  cin>>n;
  vector<double> x(n),y(n);
  for(int i=0;i<n;i++){
    cin>>x[i];
  }
  for(int i=0;i<n;i++){
    cin>>y[i];
  }
  for(int i=0;i<n;i++){
    double xy=fabs(x[i]-y[i]);
    d1+=xy;
    d2+=xy*xy;
    d3+=xy*xy*xy;
    dinf=max(xy,dinf);
  }
  d2=pow(d2,1.0/2.0);
  d3=pow(d3,1.0/3.0);
  cout<<fixed;
  cout.precision(6);
  cout<<d1<<endl<<d2<<endl<<d3<<endl<<dinf<<endl;
}
