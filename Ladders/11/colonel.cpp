#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n){
	int idx;
	int min = 9999;
	for(int i = n-1; i >= 0; i--){
		if(arr[i] < min){
			min = arr[i];
			idx = i;
		}
	}
	return idx;
}

int getMax(int arr[], int n){
	int idx;
	int max = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
			idx = i;
		}
	}
	return idx;
	
}

int main(){

// start here

int n;
cin >> n;
int arr[n];
for(int i = 0; i  <n; i++){
	cin >> arr[i];
}

//took an array input from the user
int min = getMin(arr,n);
int max = getMax(arr,n);
// cout << min <<endl;
// cout << max <<endl;

if(min < max){
	cout << max + (n -2 -min);
}else{
	cout << max + (n-1-min);
}

return 0;
}
