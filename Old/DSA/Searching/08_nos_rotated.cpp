#include <bits/stdc++.h>
using namespace std;

int rotations(vector<int>&arr){
	int start = 0;
	int end = arr.size()-1;
	int mid;
	int ans = INT_MAX;
	int index = -1;

	while(start <= end){
		mid = start + (end - start)/2;

		if(arr[start] < arr[end]){
			index = start;
			ans = arr[start];
		}
		break;
	}

	// for left sorted
	if(arr[start] < arr[mid]){
		if(arr[start] < ans){
			ans = arr[start];
			index = start;
		}
		start = mid + 1;
	}else{
		// right sorted
		if(arr[mid] < arr[end]){
			if(arr[mid] < ans){
				ans = arr[mid];
				index = mid;
			}
			end = mid - 1;
		}
	}
return index;
}

int main(){
		vector<int> arr = {4,5,6,7,0,1,2,3};
	int min = rotations(arr);
	cout << min << endl;
}