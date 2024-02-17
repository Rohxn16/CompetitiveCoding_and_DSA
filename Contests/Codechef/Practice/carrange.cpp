#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int p,m,v;
    cin >> p >> m >> v;
    cout << (m - (p-1))*v<<endl;
  }
}
