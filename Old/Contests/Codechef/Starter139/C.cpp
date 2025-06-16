#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        if(n == 1) {
            cout << 1 <<endl <<1 <<endl;
        }
        else{

        int arr[n];
        for(int i = 0; i < n; i++){
            arr[i] = i+1;
        }

        if(n % 2 == 0){
            for(int i = 1; i <= n; i++){
                cout << i <<" ";
            }
            cout << endl;

            for(int i = n; i >= 1; i--){
                cout << i <<" ";
            }
            cout <<endl;
        }else{
            
            //swap
            for(int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
            cout << endl;

            swap(arr[n/2],arr[(n/2)-1]);

            for(int i = n-1; i >= 0; i--){
                cout << arr[i] <<" ";
            }
            cout <<endl;
            
        }

}

    }
}