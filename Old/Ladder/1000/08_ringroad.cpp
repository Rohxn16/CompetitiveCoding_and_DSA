#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n,m,curr,time;
	curr = 1;
	time = 0;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int a;
		cin >> a;

		if(a == curr) continue;
		else if(a > curr){
			time += a - curr;
			curr = a;
		}else{
			time += a+(n - curr);
			curr = a;
		}
	}
	cout << time <<endl;
	return 0;
}