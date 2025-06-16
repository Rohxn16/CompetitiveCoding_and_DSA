#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> arr){
    for(int i : arr){
         cout << i <<" ";
    }
}


vector<int> mergeArr(vector<int> first, vector <int> second){
    int n1,n2;
    n1 = first.size();
    n2 = second.size();
    vector<int> res(n1+n2);
    int i,j,k;
    i = j = k = 0;

    while(i < n1 && j < n2){

        if(first[i] < second[j]){
            res[k] = first[i];
            i++;
        }else{
            res[k] = second[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        res[k] = first[i];
        i++;
        k++;
    }

    while(j < n2){
        res[k] = second[j];
        j++;
        k++;
    }
    printVec(res);
    cout<<'\n';
    return res;
}

vector<int> mergeSort(vector<int> arr){
    if(arr.size() == 1) return arr;

    int mid = arr.size()/2;

    vector<int> left(arr.begin(), arr.begin()+mid);
    vector<int> right(arr.begin()+mid,arr.end());

    return mergeArr(mergeSort(left),mergeSort(right));
}

int main(){
    vector<int> arr = {3,1,2,7,4,5,9};
    vector<int> res = mergeSort(arr);
    printVec(res);
}