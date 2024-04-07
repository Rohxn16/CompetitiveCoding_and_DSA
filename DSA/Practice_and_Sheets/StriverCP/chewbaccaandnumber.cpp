#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.length();

  if(n <= 1) cout << s;
  else{
    for(int i = 0; i < n; i++){
      if(i == 0 && s[i]  == '9') cout << '9';
      else{
        if(s[i] > '4') cout << '9' - s[i];
        else cout << s[i];
      }
    }
  }
}
