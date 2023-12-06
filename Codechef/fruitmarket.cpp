#include <bits/stdc++.h>
using namespace std;

int getMin(int a,int b, int c){
	return min(min(a,b),c);
}

int getMid(int a, int b, int c){
	return (a+b+c) - getMin(a,b,c) - max(max(a,b),c);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x,a,b,c;
		cin >> x >> a >> b >> c;

		int min = getMin(a,b,c);
		int mid = getMid(a,b,c);

		int price = 0;
		price = min + mid; //atleast 2 types
		price += (x-2)*min;

		cout << price << endl;

	}
return 0;
}
