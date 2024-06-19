#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
}

void insertionSortRecursive(int arr[], int n, int i){
    if(i == n) return;
    else{
        int curr = arr[i];
        int j;
        for(j = --i; j >= 0 && arr[j] > curr; j-- ){
            swap(arr[j],arr[j+1]);
        }
        arr[j+1] = curr;
    }

    insertionSortRecursive(arr,n,++i);
}

void insertionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int curr = arr[i];
        int j;
        for( j = i-1; j >= 0 && arr[j] > curr; j--){
                // move all to right by one and swap them
                swap(arr[j],arr[j+1]);
        }
        arr[j+1] = curr;
    }

    printArray(arr,n);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,5,8,2,4,6,3,9};
    int n = 8;
    insertionSort(arr,n);
    return 0;
}
