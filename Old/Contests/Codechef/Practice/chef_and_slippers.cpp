#include <bits/stdc++.h>
using namespace std;

int getPrice(int n, int left, int price){
	int right = n - left;
	return min(left,right)*price;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,l,x;
		cin >> n >> l >> x;

		int price = getPrice(n, l, x);
		cout << price <<'\n';
		}
	}
