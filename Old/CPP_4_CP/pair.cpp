#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  pair<int,string> p;
  pair<int,string> p2;
  p = make_pair(1,"abcd");
  p2 = {2,"abc"};
  cout << p.first << " "<<p.second<<endl;
  cout << p2.first << " "<<p2.second<<endl; 
  return 0;
}
