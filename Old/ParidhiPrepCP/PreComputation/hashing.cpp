#include <bits/stdc++.h>
using namespace std;

const int i5 = 1e5;

int main(){
  int n;
  cin >> n;
  vector<int> arr;
  vector<int> has(i5);
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    arr.push_back(x);
    has[x]++;
  }

  int q;
  cin >> q;
  while(q--){
    int x;
    cin >> x;
    cout << has[x] <<endl;
  }

}