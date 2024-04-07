#include <bits/stdc++.h>
using namespace std;

void isPal(string s, int n){
  for(int i = 0; i < n; i++){
    if(s[i] == s[n-i-1]) continue;
    else {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main (int argc, char *argv[]) {
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;

    int len = s.size();
    isPal(s,len);
  }
  return 0;
}
