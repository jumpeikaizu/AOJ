#include<iostream>
using namespace std;
int main(){
  int n,m,l;
  cin>>n>>m>>l;
  unsigned long long  a[n][m],b[m][l],c[100][100]={};
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      cin>>a[i][j];
  for(int i=0;i<m;i++)
    for(int j=0;j<l;j++)
      cin>>b[i][j];
  for(int i=0;i<n;i++)
    for(int j=0;j<l;j++)
      for(int k=0;k<m;k++)
	c[i][j]+=a[i][k]*b[k][j];
  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      cout<<c[i][j]<<((j==l-1)?"":" ");
    }
    cout<<endl;
  }
}
