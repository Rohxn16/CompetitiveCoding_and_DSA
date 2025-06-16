#include <bits/stdc++.h>
using namespace std;

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

		//sort em
		sort(arr,arr+n); // hope this is right way lol
		// start checking from the 2nd last element and look for a unique element as our first unique element is already the last element of the array
		int last = arr[n-1];
		for(int i = n-2; i >= 0; i--){
			if(arr[i] != last){
				cout << arr[i] + last << endl;
				break;
			}
		}
	}
}
