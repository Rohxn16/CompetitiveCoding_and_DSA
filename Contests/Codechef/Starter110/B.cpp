#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  int t;
  cin >> t;
  while(t--){
    int x,n;
    cin >> x >> n;

    int remaining = n - (x * 100);
    if(remaining <= 0) cout << "0\n";
    else{
      int res = (remaining % 100 == 0)? remaining / 100 : (remaining / 100) + 1;
      cout << res <<'\n';
    }
  }
  return 0;
}
