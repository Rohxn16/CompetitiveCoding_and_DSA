#include <bits/stdc++.h>
using namespace std;

void kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<float,pair<int,int>>> v;
        for(int i = 0; i < arr.size()-1; i++){
            for(int j = i+1; j < arr.size(); j++){
                float f = (float)arr[i]/arr[j];
                v.push_back({f,{arr[i],arr[j]}});
            }
        }

        sort(v.begin(),v.end());
        for(auto i : v){
            cout << i.first <<endl;
        }
}


int main(){
    int arr[1,2,3,5]; int k = 3;
    kthSmallestPrimeFraction(arr,k);
}