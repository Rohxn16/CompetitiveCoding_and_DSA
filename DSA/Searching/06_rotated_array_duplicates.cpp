#include <bits/stdc++.h>
using namespace std;

bool find_rotated_duplicate(vector<int>&arr, int target){
	int start = 0;
	int end = arr.size() - 1;
	int mid;

	while(start <= end){
		mid = start + (end - start)/2;

		if(arr[mid] == arr[start] && arr[mid] == arr[end]){
			start++;
			end--;
			continue;
		}

		if(arr[start] <= arr[mid] && arr[mid] <= arr[end]){
			// left sorted
			if(target <= arr[mid]){
				end = mid - 1;
			}else{
				start = mid + 1;
			}
		}else{
			if(arr[mid] <= target && target <= arr[end]){
				start = mid + 1;
			}else{
				end = mid - 1;
			}
		}
	}
return false;

}

int main(int argc, char const *argv[])
{
	vector<int> arr = {8,8,8,9,1,2,3,3,3,4,5,6,6,7};	
	bool present = find_rotated_duplicate(arr,1);
	cout << index <<endl;
	// tested working
	return 0;
	return 0;
}