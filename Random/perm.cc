#include <bits/stdc++.h>

using namespace std;


    int findPermutationDifference(string s, string t) {
        
        unordered_map <char,int> mp;
        int x = 0;

        for(char ch : s){
            mp[ch] = x;
            ++x;
        }

        int sum = 0;

        for(int i = 0; i < s.size(); i++){
            char ch1 = s[i];
            char ch2 = t[i];
            int val1 = mp[ch1];
            int val2 = mp[ch2];

            sum += abs(val1 - val2);

        }
        
        return sum;

    }

int main(int argc, char const *argv[])
{
    string a = "rwohu";
    string b = "rwuoh";
    cout << findPermutationDifference(a,b)<<endl;
    return 0;
}
