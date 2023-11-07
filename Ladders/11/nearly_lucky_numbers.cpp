#include <bits/stdc++.h>
using namespace std;

int main(){
// start here
long long int n;
cin >> n;
int count = 0;

for(long long int i = n; i != 0; i = i/10){
	int d = i % 10;
	if(d == 7 || d == 4) count++;
	else continue;
}

if(count == 4 || count == 7) cout <<"YES";
else cout << "NO";

return 0;
}
