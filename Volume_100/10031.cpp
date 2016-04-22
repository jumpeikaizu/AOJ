#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n,q,count=0,temp;
  cin>>n;
  vector<int> s(n);
  for(int i=0;i<n;i++) cin>>s[i];
  sort(s.begin(),s.end());
  cin>>q;
  for(int i=0;i<q;i++){
    cin>>temp;
    if(binary_search(s.begin(),s.end(),temp)){
      count++;
    }
  }
  cout<<count<<endl;
}
