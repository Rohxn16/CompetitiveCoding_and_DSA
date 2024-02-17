//find the first and the last occuring index of x in an array

#include <bits/stdc++.h>
using namespace std;

//linear solution

pair<int,int> linearSearch(vector<int> &arr, int key){
    int index1 = -1;
    int index2 = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == key){
            if(index1 == -1){
                index1 = i;
            }else{
                index2 = i; // will end at the last index of key element
            };
        }
    }
    pair<int,int> res;
    res.first = index1;
    res.second = index2;

    return res;
}

// optimized approach using binary search (gonna work for sorted array only)
/*
Here we are gonna use the concepts of lower and upper bounds, lb gives us the
first index of the key while ub gives us the index of the very next element
after the last index of key, so the index is ub - 1. Thus we get the first and
last indeces
*/
int lb(vector<int>&arr, int key){
    int start,end,mid,ans;
    start = 0;
    end = arr.size()-1;
    ans = arr.size();

    while(start <= end){
        mid = start + (end - start)/2;

        if(arr[mid] >= key){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid+1;
        }
    }
    return ans;
}

int ub(vector<int>&arr, int key){
    int start,end,mid,ans;
    start = 0;
    end = arr.size()-1;
    ans = arr.size();

    while(start <= end){
        mid = start + (end - start)/2;

        if(arr[mid] > key){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return ans;
}

pair<int,int> optimisedSearch(vector<int>&arr, int key){
    pair<int,int> res;
    res.first = lb(arr,key);
    res.second = ub(arr,key) - 1;
    return res;
}

int main(int argc, char const *argv[])
{
    vector <int> arr = {2,4,6,8,8,8,11,13};
    int key = 8;
    pair<int,int> res = optimisedSearch(arr,key);
    cout << "The first index of the key element is : "<<res.first <<"\nThe last index of the key element is : "<<res.second<<endl;
    // cout << res <<endl;
    return 0;
}
