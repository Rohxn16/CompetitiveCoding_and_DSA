#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n;
    cin >> n;
    long long int arr[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      arr[i] = x;
      sum += x;
    }
    int each = sum / n;

    int flag = 0;
    if (n == 1)
      cout << "YES\n";
    else {
      for (int i = 0; i < n; i++) {
        if (arr[i] < each) {
          cout << "NO\n";
          flag++;
          break;
        } else {
          arr[i + 1] += arr[i] - each;
          arr[i] = each;
        }
      }

      if (flag == 0)
        cout << "YES\n";
    }
  }
}
