#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, string s2){

    if(s.length() == 0) return false;
    else{
        if(s.length() == s2.length() && s == s2) return true;
        else if(s.length() == s2.length()+1 && s2 == s.substr(1)) return true;
        else {
            s2 = s[0] + s2;
            s = s.substr(1);
            return isPalindrome(s,s2);
        } 
    }
}

int main(){
    if(isPalindrome("ROHAN","")) cout << "ROHAN is PALINDROME\n";
    else cout << "ROHAN is not PALINDROME\n";
        if(isPalindrome("MADAM","")) cout << "MADAM is PALINDROME\n";
    else cout << "MADAM is not PALINDROME\n";
}