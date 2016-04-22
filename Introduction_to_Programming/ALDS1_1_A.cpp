#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    cout<<a[i]<<((i==n-1)?"":" ");
  }
  cout<<endl;
  for(int i=1;i<n;i++){
    int key=a[i];
    int j=i-1;
    while(j>=0 && a[j]>key){
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=key;
    for(int k=0;k<n;k++){
      cout<<a[k]<<((k<n-1)?" ":"");
    }
    cout<<endl;
  }
}
