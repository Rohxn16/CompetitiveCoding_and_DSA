#include <bits/stdc++.h>
using namespace std;

int countAmazingPerformances(int arr[], int n){
	int max = arr[0];
	int min = arr[0];
	int count = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] < min){
			min = arr[i];
			count++;
		}
		if(arr[i] > max){
			max = arr[i];
			count++;
		}
	}
	return count;
}

int main(){
// start here
int n;
cin >> n;
int arr[n];
for(int i = 0; i < n; i++){
	cin >> arr[i];
}

int res = countAmazingPerformances(arr,n);
cout << res;
return 0;
}
