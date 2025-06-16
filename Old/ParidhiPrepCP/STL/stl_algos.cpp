#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i <n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    // min and max element
    int min = *min_element(v.begin(),v.end());
    int max = *max_element(v.begin(),v.end());

    //accumulate, does summation of n elements of the vector as per specified by the user, along with a initial sum
    int sum = accumulate(v.begin(),v.end(),0);
    cout << sum <<endl;

    // count -> counts the number of times that an elements appears in the vector
    int n = count(v.begin(),v.end(),5);
    cout << n <<endl;

    auto it = find(v.begin(), v.end(), 5);
    if(it != v.end()) cout << *it <<endl;
    else cout << "Element not found!\n";

    //reverse -> reverses the entire structure or a certain part of it

}