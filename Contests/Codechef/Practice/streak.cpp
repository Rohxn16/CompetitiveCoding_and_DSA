#include <bits/stdc++.h>
using namespace std;

void solution(long long int arr1[], long long int arr2[], int n){
    long long int omax = INT_MIN;
    long long int amax = INT_MIN;
    int c1 = 0;
    int c2 = 0;
    
    for (int i = 0; i < n; i++)
    {   
        int num = arr1[i];

        if(num != 0)c1++;
        else{
            if(c1 > omax) omax = c1;
            c1 = 0;
        }
    }
    
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int arr1[n];
        long long int arr2[n];

        for(int i = 0; i < n; i++){
            cin >> arr1[i];
        }

        for(int i = 0; i < n; i++){
            cin >> arr2[i];
        }

    //     for(int i : arr1){
    //         cout << i <<" ";
    //     }
    //     cout << endl;

    //     for(int i : arr2){
    //         cout << i <<" ";
    //     }
    //     cout << endl;
    // }

        solution(arr1,arr2,n);

    }
}