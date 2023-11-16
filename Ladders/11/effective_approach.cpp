#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  
  int n;
  cin >> n;
  unordered_map<int,int> m;
  for(int i = 1; i <= n; i++){
    int num;
    cin >> num;
    m[i] = num; // storing the number entered next to the index [1 based indexing here]
  }
  
  long long int steps_from_front = 0;
  long long int steps_from_back = 0;

  int q;
  cin >> q;
  
  for(int i = 0; i < q; i++){
    int num;
    cin >> num;

    //main calcuation of steps distance
    steps_from_front += m[num];
    steps_from_back += n - m[num] +1;
  }

  cout << steps_from_front <<" " <<steps_from_back<<"\n";
  return 0;
}
