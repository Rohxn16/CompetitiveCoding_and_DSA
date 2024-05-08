#include <bits/stdc++.h>
using namespace std;

void printVector(vector<pair<int,string>> &v){
    for(auto itr : v){
        cout << itr.first <<" " << itr.second << endl;
    }
}


int main(int argc, char const *argv[])
{
    vector<pair<int,string>> vp = {{1,"Rohan"},{2,"Nigeria"},{3,"Alabama"}};
    printVector(vp);
    // nested vectors
    
    return 0;


}
