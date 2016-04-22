#include <iostream>
#include <cctype>
using namespace std;

int main(){
  char c;
  int count[26] = {0};
  while(cin>>c){
    //if(c=='\n') break;
    int num = tolower(c) - 'a';
    count[num]++;
  }
  for(int i=0;i<26;i++){
    char alphabet = i + 'a';
    cout << alphabet << " : " << count[i] << endl;
  }
}
