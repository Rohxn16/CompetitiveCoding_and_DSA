#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

int N;
cin >> N;
int x1,x2,x3;
x1 = 0;
x2 = 0;
x3 = 0;
for(int i = 0; i < N; i++){
  int a,b,c;
  cin >> a >> b >> c;
  x1 += a;
  x2 += b;
  x3 += c;
}
if(x1 == 0 && x2 == 0 && x3 == 0) cout << "YES";
else cout <<"NO";
return 0;
}
