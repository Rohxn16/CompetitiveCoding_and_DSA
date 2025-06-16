#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = sizeof(s);
		vector<int> arr(n);
		for(char ch : s){
			if(ch == 'r') arr[0]++;
			else if(ch == 'u') arr[1]++;
			else if(ch == 'b') arr[2]++;
			else if(ch == 'y') arr[3]++;
		}

		int c = min(min(min(arr[0],arr[1]),arr[2]),arr[3]);
		cout << c <<endl;
	}
}