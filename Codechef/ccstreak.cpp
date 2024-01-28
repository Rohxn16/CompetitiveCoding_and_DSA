#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c1 = 0;
        int c2 = 0;
        int max1 = 0;
        int max2 = 0;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            if(x != 0)c1++;
            else{
                if(c1 > max1){
                    max1 = c1;
                }
                c1 = 0;
            }
        }

        for(int i  = 0; i < n; i++){
            int x;
            cin >> x;

            if(x != 0)c2++;
            else{
                if(c2 > max2){
                    max2 = c2;
                }
                c2 = 0;
            }
        }

        if(c1 == c2)cout <<"Draw\n";
        else if(c1 > c2)cout <<"Addy\n";
        else cout << "Om\n";
    }
    
    return 0;
}
