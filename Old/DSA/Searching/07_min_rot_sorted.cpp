#include <bits/stdc++.h>
using namespace std;

int find_min(vector<int>&arr){
	int start = 0;
	int end = arr.size() - 1;
	int mid;
	int ans = 9999;

	while(start <= end){
		mid = (start + end)/2;

		if(arr[start] <= arr[mid]){ //for left sorted
			ans = min(ans,arr[start]);
			start = mid + 1;
		}else{ // for right sorted
			ans = min(ans,arr[mid]);
			end = mid -1;
			// ans = ans<arr[mid]?ans:arr[mid];
		}

		// cout << ans <<endl;
	}
	return ans;
}

// there are no duplicates in this one
int main(){
	vector<int> arr = {4,5,6,7,0,1,2,3};
	int min = find_min(arr);
	cout << min << endl;
}