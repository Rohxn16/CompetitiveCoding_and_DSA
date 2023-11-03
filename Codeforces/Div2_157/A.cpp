#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin >> t;
while(t--){
  int x,y,k;
  cin >> x >> y >> k;
  int time;
  if(x >= y){
    cout << x <<"\n";
  }else if(y > x && y-x <= k){
    time = x + k;
    cout << time <<"\n";
  }else {
    time = x + k + (2*(y-(x+k)));
    cout << time <<"\n";
  }
  }
  return 0;
}
