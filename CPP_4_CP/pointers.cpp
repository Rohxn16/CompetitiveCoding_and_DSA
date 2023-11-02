#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int x = 10;
	int *p_x = &x; //stores the address of x (1st byte address tbp)
	cout << *p_x;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //a itself is a pointer as it refers to the address of the coninious mem allocation
	int *ptr = &arr[0];
	for(int i = 0; i < 10; i++){
		cout << *ptr <<"\n";
		ptr++;
	}
	return 0;
}