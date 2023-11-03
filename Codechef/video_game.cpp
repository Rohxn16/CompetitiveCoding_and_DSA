#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout << arr[i] <<" ";
	}
	cout <<endl;
}

void operate(int arr[], int n, vector<int> ops, int h){
	int index = 0;

	for(int i:ops){ // iterating through all the operations that we gotta do
		if(i == 1){
			//move left
			if(index == 0) continue;
			else{
				index--;
			}
		}
		else if(i == 2){
			// move right
			if(index == n-1) continue;
			else {
				index++;
			}
		}
		else if(i == 3){
			//pick up
			if(arr[index] <= 0) continue;
			else{
				arr[index]--;
			}
		}
		else if(i == 4){
			//drop
			if(arr[index] >= h) continue;
			else{
				arr[index]++;
			}
		}
		else if(i == 0){
			break;
		}
		else continue;
		// printArr(arr,n);
	}
	printArr(arr,n);

}

int main(int argc, char const *argv[]) {
	int n,h;
	cin >> n >> h;
	int arr[n];
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		arr[i] = x;
	}

	vector<int> ops;
	while (true) {
		/* code */
		int x;
		cin >> x;
		ops.push_back(x);
		if(x == 0) break;
	}
	operate(arr,n,ops,h);

	// printArr(arr,n);
	return 0;
}
