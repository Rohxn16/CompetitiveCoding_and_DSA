#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){

		int n;
		cin >> n;
		string s;
		cin >> s;

		int first = s.find('B');
		int last = s.rfind('B');

		cout << last - first + 1 <<endl;
	}
}