#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
  int n;
  while(cin>>n){
    if(n==0) break;
    double s[n],sum=0,temp=0,hensa;
    for(int i=0;i<n;i++){
      cin>>s[i];
      sum += s[i];
    }
    double m = sum/n;
    for(int i=0;i<n;i++){
      temp += pow(s[i]-m,2);
    }
    hensa=sqrt(temp/n);
    cout<<fixed<<setprecision(6)<<hensa<<endl;
  }
}
