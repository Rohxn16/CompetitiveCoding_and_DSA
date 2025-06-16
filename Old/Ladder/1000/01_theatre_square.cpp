#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  long long m,n,a;
  cin >> m >> n >> a;
  long long r,c;
  r = (m % a == 0)? m/a : (m/a)+1;
  c = (n % a == 0)? n/a : (n/a)+1;
  cout << r*c <<endl;
  return 0;
}
