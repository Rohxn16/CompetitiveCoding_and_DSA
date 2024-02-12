#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    string res = "";

    int n = s.length();
    int index = -1;
    for(int i = 0; i < n; i++){
        if(s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9'){
            i++;
        }else{
            break;
        }
    }

    for(int i = 0; i < n; i++){
        if(islower(s[i]) && isupper(s[i+1] && s[i+2] == '*')){
            res += s[i+1];
            res += s[i];
            i+=2;
        }

        else if(s[i] == '0'){
            res += s[index];
            index--;
        }
    }

    cout << res <<endl;
    return 0;
}
