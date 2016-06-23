#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int vtoi(vector<int> a,int L){
  int res=0,digit=1;
  for(int i=L-1;i>=0;i--){
	res+=a[i]*digit;
	digit*=10;
  }
  return res;
}
vector<int> itov(int ia,int L){
  vector<int> res;
  for(int i=0;i<L;i++){
	if(ia==0)
	  res.push_back(0);
	else{
	  res.push_back(ia%10);
	  ia=ia/10;
	}
  }
  return res;
}
int main(){
  vector<int> p,va;
  int L,ia;
  while(cin>>ia>>L,ia||L){
	p.clear();va.clear();
	while(1){
	  vector<int>::iterator itr = find(p.begin(),p.end(),ia);
	  if(itr!=p.end()){
		cout<<itr-p.begin()<<' ';
		cout<<*itr<<' ';
		cout<<p.size()-(itr-p.begin())<<endl;
		break;
	  }
	  p.push_back(ia);
	  va=itov(ia,L);
	  sort(va.begin(),va.end(),greater<int>());
	  int max=vtoi(va,L);
	  sort(va.begin(),va.end());
	  int min=vtoi(va,L);
	  ia=max-min;
	}
  }
  return 0;
}
