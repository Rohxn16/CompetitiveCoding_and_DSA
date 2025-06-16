// 1 2 3 4 5 - > 1 3 6 10 15

#include <bits/stdc++.h>
using namespace std;

    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        vector<int> ans(2);
        long long temp;
        for(int i = 0; i < n; i++){
            temp = 0;
            for(int j = 0; j < n; j++){
                temp += arr[j];
                if(temp == s){
                    ans[0] = i+1;
                    ans[1] = j+1;
                    return ans;
                }

                cout << temp <<" ";
            }
        }

        return ans;
    }
int main(){
    int n; long long sum;
    cin >> n >> sum;
    vector<int> arr(n);
    for(int i = 0; i <n; i++){
        int x;
        cin >> x;
        arr[i] = x;
    }
    vector<int> ans = subarraySum(arr,n,sum);
    cout <<endl;
    for(auto i : ans) cout << i <<" ";
}