#include <bits/stdc++.h>

using namespace std;


void quickSort(vector<int> &arr, int start, int end){

    if(start >= end) return;
    else{
        int s = start;
        int e = end;
        int m = s + (e - s)/2;
        int pivot = arr[m];

        while(s <= e){

            while(arr[s] < pivot){
                s++;
            }

            while(arr[e] > pivot){
                e--;
            }

            if(s <= e){
                //swap
                int temp = arr[s];
                arr[s] = arr[e];
                arr[e]= temp;
                s++;e--;
            }
        }

        // pivot put to correct index, recursively call for the other 2 halves
        quickSort(arr,start,e);
        quickSort(arr,s,end);

    }
}

int main(){
    vector<int> arr = {1,6,9,7,2,5,4,8};
    quickSort(arr,0,7);
    for(int i : arr){
        cout << i <<" ";
    }
return 0;
}