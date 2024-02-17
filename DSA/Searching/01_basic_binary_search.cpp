// TIME COMPLEXITY OF THE CODE (BOTH ITERATIVE AND RECURSIVE O(log n))
#include <bits/stdc++.h>
using namespace std;

// basic binary search example
// for the algorithm to work, the array needs to be a sorted array
int binarySearch(vector<int>& nums, int target) {
    int n = nums.size(); //size of the array
    int low = 0, high = n - 1;

    // Perform the steps:
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) return mid;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int binarySearchRec(vector<int>& nums, int low, int high, int target) {

    if (low > high) return -1; //Base case.

    // Perform the steps:
    int mid = (low + high) / 2;
    if (nums[mid] == target) return mid;
    else if (target > nums[mid])
        return binarySearchRec(nums, mid + 1, high, target);
    return binarySearchRec(nums, low, mid - 1, target);
}
// same problem iterative run
int linearSearch(vector <int> &arr, int n, int key){
	// this has a linear time complexity O(n) as it iterates through every element until it finds the required element
	// the only advantage is that the array does not need to be sorted
}
int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i <   n; i++){
		int x;
		cin >> x;
		arr.push_back(x);
	}
	int key;
	cin >> key;
	
	int index = binarySearchRec(arr,0,n-1,key);
	cout << index <<endl;
}

