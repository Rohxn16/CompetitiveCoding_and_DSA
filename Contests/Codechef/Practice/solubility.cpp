#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x,a,b;
		cin >> x >> a >> b;
		
		//max solubility will be  at 100 deg c
		//difference from 100
		
		int diff = 100 - x;
		cout << (a + (diff*b))*10<<endl;
	}
}
