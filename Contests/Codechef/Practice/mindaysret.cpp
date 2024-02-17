#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		
//		if(n % k == 0){
//			cout << n / k <<endl;
//		}else{
//			cout << (n / k) + 1 << endl;
//		}
//		 Trying the same with ternary ops
		
		int res = (n%k == 0)? n/k : (n/k)+1;
		cout << res << endl;
	}
return 0;
}
