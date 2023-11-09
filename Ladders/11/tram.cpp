#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int count = 0;
	int max = 0;
	for(int i = 0; i < n; i++){
		int x,y;
		cin >> x >> y;
		count = count - x + y;
		if(count > max) max = count;
	}
	cout << max;
}