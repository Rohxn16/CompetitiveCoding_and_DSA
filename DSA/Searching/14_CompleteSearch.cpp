#include <bits/stdc++.h>
using namespace std;

int completeSearch(const vector<int>&arr, int target, int index){
    if(index >= arr.size()) return -1;

    if(arr[index] == target) return index;
    
    return completeSearch(arr,target,++index);
}

int main(){
    vector <int> arr = {4,3,7,1,9,5};
    int target = 7;

    int i = completeSearch(arr,target,0);
    cout << i <<endl;
}