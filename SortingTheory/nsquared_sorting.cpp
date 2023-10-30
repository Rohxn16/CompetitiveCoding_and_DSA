#include <bits/stdc++.h>
using namespace std;

// O (n^2) algorithms

void printVector(vector <int> arr){
	for(int i:arr){
		cout<<i<<" ";
	}
	cout<<"\n";
}

void bubbleSort(vector <int> arr, int n){
	for(int i=0; i<n; i++){ //outer loop for iterating through each element of the arr
		for(int j = 0; j < n-1; j++){ // inner loop till n-1 for each element
			if(arr[j] > arr[j+1]){ //comparing consecutive elements
				swap(arr[j],arr[j+1]);
			}
		}
	}
	printVector(arr);
	/*
	Approach to bubble sort is simple, there are two nested loops for n and n-1
	runs respectively, for each element every other element in the array is checked
	and swapped if they are found not to be in ascending order
	*/
}

void selectionSort(vector <int> arr, int n){
	int i,j,min;
	min = 0;
	for(i = 0;i < n-1; i++){
		
		min = i;
		for(j = i+1; j < n; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		if(min != i){
			swap(arr[min], arr[i]);
		}
	}
	
	printVector(arr);
	/*
	Here, although we have the same worst case complexity,we do fewer comparisons 
	than bubble sort.
	
	*/
}

int main(){
	int n;
	cin >> n; //enter the length of the vector in the first line (altho its dynamic)
	vector <int> arr;
	for(int i = 0; i  < n; i++){
		int num;
		cin >> num;
		arr.push_back(num);
	}
	printVector(arr);
	bubbleSort(arr,n);
	selectionSort(arr,n);
}

/*
Extra notes : 
1. Inversions is an useful technique when analyzing sorting algorithms. Inversion : A
pair of array consecutive elements that are in wrong order is called an inversion ex: 
indeces i,j where i < j but arr[i] > arr[j]. What bubble sort does is identify individual
inversions and reinvert them to solve the problem of sorting.


*/