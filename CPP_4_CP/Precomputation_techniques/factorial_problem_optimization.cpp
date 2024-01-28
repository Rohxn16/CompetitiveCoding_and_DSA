// Constraints 0 < t,n <= 10^5

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    const int N = 1e5+10; // 10^5 + 10
    long long fact[N];
    fact[0] = fact[1] = 1;
    for(int i = 2; i <= N; i++){
        fact[i] = i * fact[i-1];
    }
    while(t--){
        int n;
        cin >> n;

        cout << fact[n] <<endl;
    }
    return 0;
}
