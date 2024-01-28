#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for(int i = 1; i <= N; i++){
        cin >> a[i];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int l,r;
        cin >> l >> r;
        long long sum = 0;

        for(int i = l; i <= r; i++){
            sum += a[i];
        }

        cout << sum << endl;
    }
    
    return 0;
}
