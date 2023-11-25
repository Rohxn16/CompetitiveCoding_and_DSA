#include <bits/stdc++.h>
using namespace std;

void printSet(set<string> &s){
  for(auto item : s){
    cout << item <<'\n';
  }
}

int main (int argc, char *argv[]) {
  // sets are used to store unique elements in order
  // there are 3 sets : normal sets, unordered sets and multisets
  
  //SET:
  set<string> s;
  s.insert("abc");
  s.insert("xbd");
  s.insert("bca");
  auto it = s.find("abc");
  printSet(s);
  s.erase("abc");
  printSet(s);

  //unordered sets
  // All complexities are O(1) here instead of log n
  unordered_set<string> us;
  us.insert("abc");
  us.insert("zsh");
  us.insert("bcd");
  return 0;
}
