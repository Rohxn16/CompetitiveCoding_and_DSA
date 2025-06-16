#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
		int N,l,r;
		int max,min,happy;
		max = 0;
		min = 0;
		happy = 0;
		
		cin >> N >> l >> r;
		
		for(int i = 0; i < N; i++){
			int x;
			cin >> x;
			
			if(x >= l && x <= r){
				happy++;
			}else{
				happy--;
			}
			
			if(happy > max) max = happy;
			if(happy < min) min = happy;
			
		}
		cout << max <<" " <<min <<endl;
	}
}
