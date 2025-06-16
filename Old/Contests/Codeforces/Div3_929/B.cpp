#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>

// functions
#define pb push_back
#define pop pop_back
#define in insert
#define rem erase

// maybe i should write a simple function for this
// bool find(vector<int> &arr, int n) {
  // for (int i : arr) {
    // if (i == n)
      // return true;
  // }
  // return false;
// }
// 
int main(int argc, char *argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    // start here
    // imma redo this shit
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      arr[i] = x;

      sum += x;
    }

    if (sum % 3 == 0)
      return 0;
    else if ((sum + 1) % 3 == 0 || find(arr.begin(), arr.end(), (sum%3)) != arr.end())
      cout << "1\n";
    else
      cout << "2\n";
  }
  return 0;
}
