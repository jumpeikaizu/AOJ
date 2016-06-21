#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int,int> P;
int main(){
  int h,w;
  vector<pair<P,int> > v;
  
  for(h=1;h<=150;h++)
	for(w=h+1;w<=150;w++)
	  v.push_back(pair<P,int>(P(h*h+w*w,h),w));
  sort(v.begin(),v.end());
  
  while(cin>>h>>w, h||w){
	pair<P,int> p(P(h*h+w*w,h),w);
	for(int i=0;i<v.size();i++){
	  if(v[i]>p){
		cout<<v[i].first.second<<' '<<v[i].second<<endl;
		break;
	  }
	}
  }
  return 0;
}

