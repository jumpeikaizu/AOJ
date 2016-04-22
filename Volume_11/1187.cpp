#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Team{
  int id,time,ac_num;
  vector<int> wa;
  Team(int P,int _id){
	id = _id;
	time = 0;
	ac_num = 0;
	wa = vector<int>(P,0);
  }
  bool operator>(const Team &r) const{
	if(ac_num == r.ac_num)
	  if(time == r.time)
		return id > r.id;
	  else
		return time < r.time;
	else
	  return ac_num > r.ac_num;
  }
  bool operator==(const Team &r) const{
	return ac_num == r.ac_num && time == r.time;
  }
};

int main(){
  int M,T,P,R;
  int m,t,p,j;
  while(cin>>M>>T>>P>>R,M){
	vector<Team> v;
	for(int i=1;i<=T;i++)
	  v.push_back(Team(P,i));
	for(int i=0;i<R;i++){
	  cin>>m>>t>>p>>j;
	  t--;p--;
	  if(j==0){
		v[t].ac_num++;
		v[t].time += m;
		v[t].time += 20*v[t].wa[p];
	  }
	  else{
		v[t].wa[p]++;
	  }
	}
	sort(v.begin(),v.end(),greater<Team>());
	for(int i=0;i<v.size();i++){
	  if(i<v.size()-1){
		char c = (v[i]==v[i+1])?'=':',';
		cout<<v[i].id<<c;
	  }
	  else{
		cout<<v[i].id<<endl;
	  }
	}
  }
  return 0;
}
