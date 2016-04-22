#include<iostream>
using namespace std;

int main(){
  int h,w;
  while(cin >> h >> w){
    if(h==0&&w==0) break;
    int d=h*h+w*w;
    int ans_d=151*151*2;
    int ans_h=151;
    int ans_w;
    for(int ih=1;ih<=150;ih++){
      for(int iw=ih+1;iw<=150;iw++){
	int id=ih*ih+iw*iw;
	if(d>id || (d==id && h>=ih)) continue;
	if(ans_d>id || (ans_d==id && ih<ans_h)){
	  ans_h = ih;
	  ans_w = iw;
	  ans_d = id;
	}
      }
    }
    cout<<ans_h<<" "<<ans_w<<endl;
  }
}

