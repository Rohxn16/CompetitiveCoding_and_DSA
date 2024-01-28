#include <bits/stdc++.h>
using namespace std;

int dist(int x1, int y1, int x2, int y2){
	return sqrt(((x2-x1)*(x2-x1))-((y2-y1)*(y2-y1)));
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int x1,y1,x2,y2,x3,y3,x4,y4;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		int xa,ya;
		if(x1 == x2){
			xa = x2;
			ya = y2;
		}else if(x1 == x3){
			xa = x3;
			ya = y3;
		}else if(x1 == x4){
			xa = x4;
			ya = y4;
		}

		int len = dist(x1,x2,xa,ya);
		cout << len * len  << endl;
	}
	return 0;
}