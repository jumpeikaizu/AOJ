#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
  int n,p,p1,p2;
  cin>>n;
  stack<char> stc[100];
  string s;
  char block,temp;
  while(cin>>s){
    if(s=="quit") break;
    else if(s=="push"){
      cin>>p;
      cin>>block;
      stc[p].push(block);
    }
    else if(s=="pop"){
      cin>>p;
      cout<<stc[p].top()<<endl;
      stc[p].pop();
    }
    else if(s=="move"){
      cin>>p1>>p2;
      temp=stc[p1].top();
      stc[p1].pop();
      stc[p2].push(temp);
    }
  }
} 
