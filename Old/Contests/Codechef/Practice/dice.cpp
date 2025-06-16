#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
		int a,b,c,d,e,f;
		cin >> a >> b >> c >> d >> e >> f;
		
		int arr[3] = {a,b,c};
		sort(arr,arr+3);
		int num1 = (arr[2]*100) + (arr[1]*10) + arr[0];
		int arr2[3] = {d,e,f};
		sort(arr2,arr2+3);
		int num2 = (arr2[2]*100) + (arr2[1]*10) + arr2[0];

		// cout << num1 <<"  " << num2 <<endl;

		if(num1 > num2)cout << "Alice\n";
		else if(num1 < num2)cout <<"Bob\n";
		else cout <<"Tie\n";



	}
return 0;
}
