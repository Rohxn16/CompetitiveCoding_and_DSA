#include <bits/stdc++.h>
using namespace std;

int main(){
// start here
int k,l,m,n,d;
cin >> k >> l >> m >> n >> d;

if(k == 1 || l == 1 || m == 1|| n == 1) cout << d;
else{
	set <int> s;
	for(int i = 1; i <= d; i++){
		if(i%k == 0) s.insert(i);
		else if(i%l == 0) s.insert(i);
		else if(i%m == 0) s.insert(i);
		else if(i%n == 0) s.insert(i);
		
	}
	cout << s.size();
}

return 0;
}
