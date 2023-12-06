#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		int pool = 100*x;
		string score;
		cin >> score;
	
		int carlsen = 0;
		int chef = 0;
		
		for(char ch:score){
			if(ch == 'C') carlsen += 2;
			else if(ch == 'N') chef += 2;
			else{
				carlsen++;
				chef++;
			}
		}

		if(chef == carlsen){
			cout << (55 * x) <<endl;
		}else{
			if(carlsen > chef) cout << (60 * x) <<endl;
			else cout << 40 * x << endl;
		}
	}
return 0;
}
