#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  int t;
  int s, n;
  cin >> s >> n;
  pair<int, int> arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i].first >> arr[i].second;
  }
  int flag = 0;
  sort(arr, arr + n);
  for (auto i : arr) {
    if (i.first >= s) {
      flag++;
    } else {
      s += i.second;
    }
  }
  if (flag == 0)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}
