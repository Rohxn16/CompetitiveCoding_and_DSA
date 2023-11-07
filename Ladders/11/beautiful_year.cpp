#include <bits/stdc++.h>
using namespace std;

bool check (int i){
	set<int> s;
	while(i != 0){
		s.insert(i%10);
		i = i/10;
	}
	if(s.size() == 4) return true;
	else return false;
}

int main(){
// start here
int n;
cin >> n;

for(int i = n+1; i < 10000; i++){
	if(check(i) == true){
		cout << i;
		break;
	}
}

return 0;
}
