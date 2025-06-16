#include <bits/stdc++.h>
using namespace std;

int main(){
  int r1,r2,d1,d2;
  cin >> r1 >> r2 >> d1 >> d2;

  r1 += d1;
  r2 += d2;

  if(r1 > r2) cout << "Dominater\n";
  else if(r2 > r1) cout << "Everule\n";
  else{
    if(d1 > d2) cout << "Dominater\n";
    else cout << "Everule\n";
  }

  // Altho the constraint says that they have diff final ratings (which I did not notice first) i compared their improvement rates just in case the final ratigs are equal.
  return 0;
}
