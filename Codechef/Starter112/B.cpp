#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;

        int each = n / (k+1);
        cout << n - (each*k)<<endl;
    }
    
    return 0;
}
