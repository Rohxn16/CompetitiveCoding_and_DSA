#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int flag = 0;
        int counter = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(counter % 2 == 0){
                    if(j % 2 == 0) cout << "##";
                    else cout << "..";
                }else{
                    if(j % 2 == 0) cout << "..";
                    else cout << "##";
                }
            }
            cout << "\n";
            for(int j = 0; j < n; j++){
                if(counter % 2 == 0){
                    if(j % 2 == 0) cout << "##";
                    else cout << "..";
                }else{
                    if(j % 2 == 0) cout << "..";
                    else cout << "##";
                }
            }

            counter++;
            cout <<"\n";
        }
    }
}