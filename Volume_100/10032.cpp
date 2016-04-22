#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
  stack<char> st;
  char c;
  string f;
  while(cin>>f){
    if(f=="quit") break;
    else if(f=="push"){
      cin>>c;
      st.push(c);
    }
    else if(f=="pop"){
      cout<<st.top()<<endl;
      st.pop();
    }
  }
}
