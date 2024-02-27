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

string check(int a, int b){
	if(a % 2 == 0 && b * 2 != a) return "YES\n";
	else if(b % 2 == 0 && a * 2 != b) return "YES\n";
	else return "NO\n";
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    // start here
    int a,b;
    cin >> a >> b;
	cout << check(a,b);
  }
  return 0;
}
