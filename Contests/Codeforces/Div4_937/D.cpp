#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--){
        // check if a number can be expressed as the product of other binary numbers, same number repeatable and input n < 10e5
        int nums[] = {11,101,111,110,1000,1001,1100,1101,111,1011,1010,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111};
        int n;
        cin >> n;
        int flag = 0;
        for(int i : nums){

            for(int j = 0; j < 5; j++){
                int val = pow(i,j);
                if(val == n){
                    cout << "YES\n";
                    flag++;
                    break;
                }else{
                    for(int k : nums){
                        if(val * k == n){
                            cout << "YES\n";
                            flag++;
                            break;

                    }
                }
            }
        }
    }
    if(flag == 0){
        cout << "NO\n";
    }
    }
    return 0;
}
