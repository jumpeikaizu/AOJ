#include<iostream>
using namespace std;
int main(){
  int r,c,sum=0;
  cin>>r>>c;
  int a[100+1][100+1]={};
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>a[i][j];
      sum+=a[i][j];
    }
  }
  a[r][c]=sum;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      a[i][c]+=a[i][j];
    }
  }
  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
      a[r][i]+=a[j][i];
    }
  }
  for(int i=0;i<r+1;i++){
    for(int j=0;j<c+1;j++){
      cout<<a[i][j]<<((j==c)?"":" ");
    }
    cout<<endl;
  }
}
