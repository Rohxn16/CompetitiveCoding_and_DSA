// finding lower bound is to find the largest number in the array i.e. >= the target eelement

#include <bits/stdc++.h>
using namespace std;

int lowerBoundBinarySearch(vector<int>& arr, int target){
    // considering that the array is sorted in ascending order
    int ans = arr.size();
    int start = 0;
    int end = arr.size()-1;
    int mid;
    while(start <= end){
        mid = start + (end - start)/2;
        if(arr[mid] < target) start = mid + 1;
        
        if(arr[mid] >= target){
            ans = mid;
            end = mid-1;

        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int ans = lowerBoundBinarySearch(arr,5);
    cout << ans <<endl;    
    return 0;
}
