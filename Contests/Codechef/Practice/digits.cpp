#include <bits/stdc++.h>
using namespace std;

void check_length(long long int n){
	
	int digits = 0;
	if(n == 0){
		cout << 1 <<'\n';
		return;
	}
	for(int i = n; i != 0; i = i / 10){
		digits++;
	}
	
	if(digits <= 3){
	cout << digits <<'\n';
	}else{
		cout << "More than 3 digits\n";
	}
}

int main(){
	long long int n;
	cin >> n;
	check_length(n);
	return 0;
}

