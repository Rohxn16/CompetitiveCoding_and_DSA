#include <bits/stdc++.h>
using namespace std;

int main(){
// start here
int n;
cin >> n;
vector <int> arr;
for(int i = 0; i < n; i++){
	int x;
	cin >> x;
	arr.push_back(x);
}

//sort the arr

for(int i = 0; i < n - 1; i++){
	int min = i;
	
	for(int j = i+1; j < n; j++){
		if(arr[min] > arr[j]){
			min = j;
		}
	}
	
	if(min != i){
		swap(arr[i],arr[min]);
	}
}

for(int i : arr){
	cout << i <<' ';
}
return 0;
}
