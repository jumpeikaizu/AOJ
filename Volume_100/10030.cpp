#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,q,temp,count=0;
  cin>>n;
  vector<int> s(n);
  for(int i=0;i<n;i++) cin>>s[i];
  cin>>q;
  for(int i=0;i<q;i++){
    cin>>temp;
    for(int j=0;j<n;j++){
      if(s[j]==temp){
      count++;
      break;
      }
    }
  }
  cout<<count<<endl;
}
