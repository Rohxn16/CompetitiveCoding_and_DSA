 // let me try a few dry runs in my notebook

// did a few dry runs and found this obb.

/*
 lets say we have the array   1 2 8 15 20  (after arranging)

 - > sum3 + 10 + 23 + 35 - >  71
  -> new order
  - >   1 8 20 15 2 -> 
  9 + 28 + 35 + 17 which is greater than 71 -> 89 to be exact

  so what we goota do here is track the largest element out of the array
  put it in the middle and place the next largest element next to it and so on until it is full
	
	but i have no idea how to implement it, imma waste the rest of my time thinking about it
*/

// 1 2 8 15 ->  (doesnot matter as the least element gets added once anyway) 1 2 15 8-> prolly gonna need a flag to tell me whether one side is filled or not in case of a even array
// 1 2 8 15 20
// 1(0) 8(1)  20(2) 15(3) 2(4) // for odd array the other elemetns will get evened out as there are excatly n-1 oscillations from max-1 max+1
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			arr[i] = x;
		}

		sort(arr,arr+n); // we have the sorted array here
		int mid;
		int res[n];
		if(n % 2 == 0){
			// for even array
			mid = n/2;
			res[mid] = arr[n-1];
			int left = mid -1;
			int right = mid+1;
// 0 1 2 3 4 5 6
// 1 3 6 9 8 5 4
			for(int i = n-2; i >= 0; i++){
				if(i % 2 == 0 && right != n){
					res[right] == arr[i];
					right++;
				}else{
					res[left] = arr[i];
					left--;
				}
			}

		}else{
			// for odd array
			// int x = 1;
			mid = n/2; // cant find the logic for filling array ... .. . .. . .. .
			res[mid] = arr[n-1];
			int left = mid -1;
			int right = mid + 1;
			for(int i = n-2; i >= 0; i--){
				if(i % 2  == 1 && right != n){
					// add element to the right
					res[right] = arr[i];
					right++;
				}

				else if(n % 2 == 0 && left != -1){
					res[left] = arr[i];
					left--;
				}
			}

		}

		// now we gotta do the sum

		int sum = 0;
		for(int i = 0; i < n; i++){
			sum += res[i] + res[i+1];
		}

		cout << sum << endl;
	}
	return 0;
}


// fuck it there is no way im making it out of this one