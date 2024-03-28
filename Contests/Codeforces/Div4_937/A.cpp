#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        if ( a < b && b < c){
            cout << "STAIR\n";
        }else if(a < b && c <b){
            cout <<"PEAK\n";
        }else{
            cout << "NULL\n";
        }
    }
}