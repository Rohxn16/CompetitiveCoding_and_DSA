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

//sort the array
for(int i = 0; i < n-1; i++)
	bool swapped;
	for(int j = 0; j < n-i-1; j++){
		if(arr[j] > arr[j+1]){
					swap(arr[j] , arr[j+1]);
		}
	}
	
}

for (int i : arr){
	cout << i <<" ";
}
return 0;
}
