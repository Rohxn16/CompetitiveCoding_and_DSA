#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){

		int ascore = 0;
		int bscore = 0;
		for(int i = 0; i < 5; i++){
			int a,b;
			cin >> a >> b;
			ascore += a;
			bscore += b;
		}

		if(ascore > bscore) cout << 1 <<endl;
		else if(ascore < bscore) cout << 2 << endl;
		else cout << 0 <<endl;

	}
}
