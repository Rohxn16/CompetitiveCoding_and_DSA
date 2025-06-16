#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int flag = 0;
        // check if the sum of the 2 consecutive elements of the array is equal to the sum of all the elements of the array or not
        int res[n];
        if( n % 2 == 0){
            for(int i = 0; i < n; i++){
                if(i % 2 == 0) res[i] = 1;
                else res[i] = -1;
            }
        }else{
            int k = (n - 1)/2;
            for(int i = 0; i < n; i++){
                if(i % 2 == 0){
                    
                    res[i] = k - 1;

                }else{
                    res[i] = -1 * k;
                }

                if(res[i] == 0){
                    flag++;
                    break;
                }
            }
        }

        if(flag == 0){
            cout << "YES\n";
            for(int i : res){
                cout << i <<" ";
            }
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}