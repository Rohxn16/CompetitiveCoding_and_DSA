#include <bits/stdc++.h>
using namespace std;



int main(){
  int even = 0;
  int odd = 0;
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    if(x % 2 == 0) even++;
    else odd++;
  }

  cout << "ODDS : " << odd << " EVEN : " <<even;
}
