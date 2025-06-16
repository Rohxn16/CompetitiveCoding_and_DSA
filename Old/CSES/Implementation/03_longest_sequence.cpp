#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;

  int count = 0;
  int max_count  =0;
  for(int i = 0; i < s.size() - 1; i++){


    char ch = s[i];
    char next_char = s[i+1];

    if(ch == next_char){
      count++;
    }else{
      count = 0;
    }

    if(count > max_count){
      max_count = count;
    }
  }

  cout << max_count+1 << endl;
	return 0;
}
