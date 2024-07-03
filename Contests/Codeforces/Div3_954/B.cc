#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        n+=2;
        m+=2;
        int arr[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i == 0 || j == 0 || i == n-1 || j == m-1){
                    arr[i][j]= -1;
                }else{
                    cin >> arr[i][j];
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                
                if(arr[i][j] > arr[i+1][j] && arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i][j+1] && arr[i][j] > arr[i][j-1]){
                    arr[i][j] = max(max(max(arr[i+1][j],arr[i-1][j]),arr[i][j+1]),arr[i][j-1]);
                }
            }
        }


        for(int i = 1; i < n-1; i++){
            for(int j = 1; j < n-1; j++){
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}