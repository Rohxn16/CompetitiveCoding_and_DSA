#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;

		set<int> counter;

		for(int i = a; i <= b; i++){
			counter.insert(i);
		}

		for(int i = c; i <= d; i++){
			counter.insert(i);
		}

		int count = 0;
		for(auto element : counter){
			count++;
		}

		cout << count <<'\n';
	}
}
