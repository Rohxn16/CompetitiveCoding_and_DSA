#include <bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
	// if the map were <string,string> the complexity would increase as the time would go from log n to s.size * log n
	//traversing a map
	map<int,string> :: iterator it;
	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first <<" " <<(*it).second<<endl;
	}
}

int main(){
// start here

	map<int,string> m;
	m[1] = "rohan";
	m[3] = "rohxn";
	m[5] = "rohxn16";
	//another way
	m.insert({4,"nissan"});
	
	//to jump to a certain element
	auto itx = m.find(3);
	if(itx == m.end() ) cout <<"No val\n";
	else cout <<"Found";
	
	// to erase an element
	m.erase(3); //we can also pass iterator instead of key
	print(m); //log n
	
	//traversing a map
	map<int,string> :: iterator it;
	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first <<" " <<(*it).second<<endl;
	}
	//notice that the keys are sorted thus are ordered maps
	//also all values need to be unique, duplicates are not stored
	
return 0;
}
