#include <bits/stdc++.h>
using namespace std;

int highest(int i, int j, int k)
{
  if(i > j && i > k)
  {
    return i;
  }
  else if (j > k)
  {
    return j;
  }
  else
  {
    return k;
  }
}

int main(){
	int a,b,c;
	cin >> a >> b >> c;
		int max = highest(a,b,c);
		int max2 = a + b + c - max - 1;

	if(a == 1 && b == 1 && c == 1) cout << 3;
	else if((a == 1 && b == 1 && c != 1) || (b == 1 && c == 1 && a != 1)) cout << 2*max;
	else if(a == 1 && b != 1 && c == 1) cout << 2 + b;
	else if(a != 1 && b != 1 && c != 1) cout << a*b*c;
	else{
		if((a == 1 && b == max2) || (b == 1 && a == max2)){
			cout << (a+b)*c;
		}else if((b == 1 && c == max2) || (c == 1 && b == max2)){
			cout << a*(b+c);
		}else if(b == max){
			cout << (max+1)*max2;
		}
	}
}