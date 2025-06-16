#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  set<string> s;
  int n;
  cin >> n;
  
  while(n--){
    string str;
    cin >> str;
    s.insert(str);
  }

  for(auto value : s){
    cout << value <<'\n';
  }
  return 0;
}
