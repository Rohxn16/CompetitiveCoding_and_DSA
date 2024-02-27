#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    // start here
	int n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		arr.push_back(x);
	}
	vector<int> res(n);
	
	for(int i = 0; i < n; i++){
		res[i] = arr[i] - i;
	}
	
  }
  return 0;
}
