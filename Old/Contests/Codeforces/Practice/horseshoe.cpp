#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n = 4;
	long long int arr[n];
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		arr[i] = num;
	}
	
	//sort the array
	sort(arr,arr+n);
	int counter = 0;
	for(int i = 0; i <n-1; i++){
		if(arr[i] == arr[i+1]){
			counter++;
		}
	}
	cout << counter;
}