#include <bits/stdc++.h>
using namespace std;


int find_rotated(vector<int>&arr, int target){
	int start = 0;
	int end = arr.size()-1;
	int mid;

	while (start <= end)
	{
		mid = start + (end-start)/2;

		if(arr[mid] == target) return mid;

		else if(arr[start] <= arr[mid]){
			// left part is sorted
			if(arr[start] <= target && target <= arr[mid]){
				// eliminate the right half
				end = mid - 1;
			}else{
				start = mid + 1;
			}
			
		}else{
			//right part is sorted
			if(arr[mid] <= target && target <= arr[end]){
				//eliminate the left half
				start = mid + 1;
			}else{
				end = mid - 1;
			}
		}
	}
	return -1;
	
}


int main(int argc, char const *argv[])
{
	
	vector<int> arr = {7,8,9,1,2,3,4,5,6};	
	int index = find_rotated(arr,1);
	cout << index <<endl;
	// tested working
	return 0;
}