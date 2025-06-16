#include <bits/stdc++.h>
using namespace std;

int first(vector<int>&arr, int key){
	int start = 0;
	int end = arr.size()-1;
	int ans = -1;
	int mid;
	while(start <= end){
		mid = start + (end - start)/2;

		if(arr[mid] == key){
			ans = mid;
			end = mid - 1;
		}

		else if(arr[mid] > key){
			end = mid - 1;
		}

		else{
			start = mid + 1;
		}

		// cout << mid <<endl;
	}

	return ans;
}

int last(vector<int>&arr, int key){
	int start = 0;
	int end = arr.size()-1;
	int ans = -1;
	int mid;
	while(start <= end){
		mid = start + (end - start)/2;

		if(arr[mid] == key){
			ans = mid;
			start = mid + 1;
		}

		else if(arr[mid] > key){
			end = mid - 1;
		}

		else{
			start = mid + 1;
		}

		// cout << mid <<endl;
	}

	return ans;
}

int main(){
	vector<int> arr = {5,7,7,8,8,10};
	int n = 8;
	int first_index = first(arr,8);
	int last_index = last(arr,8);
	cout << first_index <<endl;
	cout << last_index <<endl;
}