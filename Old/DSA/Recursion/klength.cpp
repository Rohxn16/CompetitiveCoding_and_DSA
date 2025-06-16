#include <bits/stdc++.h>
using namespace std;

void printAllPermutationsOfSizeK(vector<char> arr, int k, string prefix){
    if(prefix.size() == k){
        cout << prefix <<endl;
        return;
    }
    else{
        for(char ch : arr){
            string newPrefix = prefix+ch;
            // prefix += ch;
            printAllPermutationsOfSizeK(arr,k,newPrefix);
        }
    }
}

void printAllKLengthRec(char set[], string prefix,
                                    int n, int k)
{
     
    // Base case: k is 0,
    // print prefix
    if (k == 0)
    {
        cout << (prefix) << endl;
        return;
    }
 
    // One by one add all characters 
    // from set and recursively 
    // call for k equals to k-1
    for (int i = 0; i < n; i++)
    {
        string newPrefix;
         
        // Next character of input added
        newPrefix = prefix + set[i];
         
        // k is decreased, because 
        // we have added a new character
        printAllKLengthRec(set, newPrefix, n, k - 1);
    }
 
}
 

int main(){
    vector<char> chr = {'a','b'};
    printAllPermutationsOfSizeK(chr,3,"");
    // char set1[] = {'a', 'b'};
    // int k = 3;
    // printAllKLengthRec(set1,"",2,3);
}