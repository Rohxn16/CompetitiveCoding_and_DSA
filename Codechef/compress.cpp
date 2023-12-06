#include <bits/stdc++.h>
using namespace std;

int getFrames(int n, int arr[]){
	if(n == 1) return 1;
	
	int count = n;
	for(int i = 0; i < n; i++){
		if(arr[i] == arr[i+1]) count--;
	}
	return count;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[100005];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		// stdin finished

		int result = getFrames(n, arr);
		cout << result <<'\n';
	}
return 0;
}
