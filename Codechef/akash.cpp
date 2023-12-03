#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		// damn, i was careless, missed the edge case
		cout << (n / 7) + (n%6 == 0?1:0) <<'\n';
	}
}
// how careless can a person be :')
