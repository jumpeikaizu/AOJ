#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
int p;
int dfs(string s){
  vector<int> v;
  while(p<s.size()){
	cout<<p<<endl;
	if(isdigit(s[p])){
	  int voter = 0;
	  while(isdigit(s[p])){
		voter *= 10;
		voter += s[p]-'0';
		p++;
	  }
	  v.push_back((voter+1)/2);
	}
	else if(s[p]=='['){
	  p++;
	  v.push_back(dfs(s));
	}
	else if(s[p]==']'){
	  int vote=0;
	  sort(v.begin(),v.end());
	  for(int i=0;i<=v.size()/2;i++){
		vote += v[i];
	  }
	  return vote;
	}
  }
  return 1;
}

int main(){
  int n;
  string data;
  cin>>n;
  while(n--){
	cin>>data;
	p=0;
	cout<<dfs(data)<<endl;
  }
  return 0;
}
