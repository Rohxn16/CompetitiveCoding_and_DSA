#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string arr;
		cin >> arr;
		int koins = 0;
		for(int i = 0; i < n;){
			if(arr[i] == '@') koins++;
			if((arr[i+1] == '*' || arr[i+1] == '.')&& arr[i+2] != '*') i+=2;
			else if(arr[i+1] == '*' && arr[i+2] == '*') break;
			else i++;
		}

		cout << koins <<endl;
	}

return 0;

}
