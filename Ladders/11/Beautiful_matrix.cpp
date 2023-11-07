#include <bits/stdc++.h>
using namespace std;

int main(){
// start here

int a,b;
for(int i = 0; i < 5; i++){
	for(int j = 0; j <5; j++){
		int x;
		cin >> x;
		if(x == 1){
			a = i+1;
			b = j+1;	
		}
	}
}

int steps = (abs(3-a)+abs(3-b));
cout << steps;
return 0;
}
