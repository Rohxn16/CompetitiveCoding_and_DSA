#include <iostream>
using namespace std;

void printPermutations(string up, string p){

    if(up.length() == 0){
        cout << p <<endl;
        return;
    }else{
        char ch = up[0];
        for(int i = 0; i < p.length(); i++){
            string f = p.substr(0,i);
            string s = p.substr(i);
            printPermutations(f+ch+s,up.substr(1));
        }
    }
}

int main(){
    printPermutations("ROH","");
}