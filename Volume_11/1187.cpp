#include<iostream>
#include<vector>
using namespace std;

struct Team{
  int id,time,ac_num;
  vector<bool> ac;
  vector<int> wa;
  Team(int P,int _id){
	id = _id;
	time = 0;
	ac_num = 0;
	ac = vector<bool>(P,false);
	wa = vector<int>(P,0);
  }
  bool operator<(const Team &r) const{
	if(ac_num == r.ac_num){
	  ac_num < r.ac_num;
	}
	else{
	  return ac < r.ac;
	}
  
  
