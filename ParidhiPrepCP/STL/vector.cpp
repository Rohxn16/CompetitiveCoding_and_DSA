#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v){
    for(auto i : v){
        cout << i <<" ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    vector<int> v;

    // correct way of initializong vector
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        // doing push back enters the value to the end of the vector
        int x;
        cin >> x;
        v.push_back(x);

    }

    printVector(v);

    return 0;
}
