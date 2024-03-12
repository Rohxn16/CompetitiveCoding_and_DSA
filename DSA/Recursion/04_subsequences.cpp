// print all possible subsequences of an array or string using the pick or don't pick concept
#include <bits/stdc++.h>
using namespace std;

void printSubsequences(int index, int arr[], vector<int>&subs, int n){

	if(index == n){
		//print the subsequence
		for(int i : subs){
			cout << i <<" ";
		}
		if(subs.size() == 0) cout << "{}";

		cout << endl;
		return;

	}else{
		subs.push_back(arr[index]);
		printSubsequences(index+1,arr,subs,n);
		subs.pop_back();


		// not picking
		printSubsequences(index+1,arr,subs,n);
	}
}

int main(){
	int arr[] = {1,2,3,4};
	vector<int> sub;
	printSubsequences(0,arr,sub,4);
}