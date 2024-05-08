#include <bits/stdc++.h>
using namespace std;

int countBits(int n){
	int c = 0;
	while(n){
		if(n & 1) c++;
		n = n >> 1;
	}
	return c;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> even;
		vector<int> odd;
		while(n--){
			int x;
			cin >> x;
			int bits = countBits(x);
			if(bits%2 == 0) even.push_back(x);
			else odd.push_back(x);
		}

		// now sort the arrays
		sort(even.begin(),even.end());
		sort(odd.begin(),odd.end());

		for(int i : even) cout << i << " ";
		for(int i : odd) cout <<  i << " ";
			cout <<endl;
	}
}