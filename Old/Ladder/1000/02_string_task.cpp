#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  string s;
  cin >> s;
  string res = "";
  transform(s.begin(),s.end(),s.begin(), :: tolower);
  for(char ch : s){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y'){
      continue;
    }else{
      res += ".";
      res += ch;
    }
  }

  cout << res <<endl;
  return 0;
}
