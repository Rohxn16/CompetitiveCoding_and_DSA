#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  int t;
  cin >> t;
  while(t--){
    int n,x;
    cin >> n >> x;
    
    int rated = x;
    int unrated = (2 * n) -x;

    if(rated > unrated){
      cout << rated - unrated <<endl;
    }else{
      cout << 0 <<endl;
    }
  }
  return 0;
}
