#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  vector<int> v;
  int temp;
  for(int i=0;i<3;i++){
    cin>>temp;
    v.push_back(temp);
  }
  sort(v.begin(),v.end());
  cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
}
