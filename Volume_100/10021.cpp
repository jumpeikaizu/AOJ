#include<iostream>
#include<string>
using namespace std;
int main(){
  int n;
  cin>>n;
  string s,answer;
  for(int i=0;i<n;i++){
    cin>>s;
    if(answer.empty()) answer=s;
    else if(answer>s) answer=s;
  }
  cout<<answer<<endl;
}
