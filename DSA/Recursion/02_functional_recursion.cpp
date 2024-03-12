#include <bits/stdc++.h>
using namespace std;

// reversing an array using recursion
void rev(int arr[], int i, int n){
	if(i > n/2) return;
	else{
		swap(arr[i],arr[n-i-1]);
		rev(arr,++i,n);
	}
}

//check for a palindrome using recursion
bool palindrome(string s, int i){
	if(i > s.size()/2) true;
	else{
		int n = s.size();
		if(s[i] != s[n-i-1]) return false;
		palindrome(s,++i);
	}
	return true;
}

int main(){
	// int n;
	// cout << "Enter the size of the array : \n";
	// cin >> n;
	// int arr[n];
	// cout << "Enter the elements of the array : \n";
	// for(int i = 0; i < n; i++){
	// 	int x;
	// 	cin >> x;
	// 	arr[i] = x;
	// }
	// // stdin complete
	// rev(arr,0,n);
	// for(int i : arr){
	// 	cout << i <<" ";
	// }
	// cout << endl;
	string s;
	cin >> s;
	if(palindrome(s,0

		)) cout <<"YES\n";
	else cout << "NO\n";
}