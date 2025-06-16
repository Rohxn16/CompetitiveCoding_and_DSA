#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int line, n;
    cin >> line >> n;
    int flag = 0;
    for(int i = 0; i < line; i++){
        if(i % 2 == 0){
            // print #
            for(int i = 0; i < n; i++){
                cout << "#";
            }
                cout <<"\n";
        }else{
            if(flag % 2 == 0 ){
                for(int i = 0; i < n- 1; i++) cout << ".";
                cout << "#\n";
                flag++;
            }else{
                cout << "#";
                for(int i = 1; i < n; i++) cout << ".";
                cout << "\n";
                flag++;
            }
        }
    }
    return 0;
}
