#include <bits/stdc++.h>
#include <iterator>
using namespace std;

int main(){
// start here
vector<int> v = {2,3,5,6,7};
vector<int> :: iterator it = v.begin();
for(it = v.begin(); it != v.end(); ++it){
	cout << (*it) <<endl;
}

// Code shortening for iterators
for(int val : v){
	cout << val <<endl; //shorter way for iterating through values directly
//it works for all containers and not just vectors
//what this does is also copies the vector into another one and iterates them
//so we can use c++ reference instead to save O(n) time

for(int &val : v){
	cout << val<<endl;
}
}

return 0;
}
