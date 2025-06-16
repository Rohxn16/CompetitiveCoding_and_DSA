#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  string s;
  map<string, int> m;
  for (int i = 0; i < n; i++) {
    cin >> s;
    m[s]++;
  }

  auto a = m.begin();
  auto b = m.rbegin();

  string ans = a->second > b->second ? a->first : b->first;
  cout << ans << endl;
}
