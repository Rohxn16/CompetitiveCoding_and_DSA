#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        string s;
        cin >> n >> k >> s;

        // approaching this problem we understand that the score we get is the sum of the i. number of already existing pair and ii. <= k operations made on existing non pair same alphabets
        // lets make 2 frequency arrays initialized with -1 for these

        int lower[26] = {0};
        int upper[26] = {0};
        int score = 0;

        for(int i = 0; i < n; i++){
            char ch = s[i];
            if(isupper(ch)) upper[(int)ch-65]++;
            else lower[(int)ch-97]++;
        }
        // stored the frequency of all the elements from the string here differently for upper and lowercase characters

        // run 1 : update the score for the existing pairs

        for(int i = 0; i < 26; i++){
            int lch = upper[i];
            int uch = lower[i];

            if(lch != 0 && uch != 0){
                // ops
                int m = min(lch,uch);
                score += m;
                upper[i]-=m;
                lower[i]-=m;

            }else continue;
        }

        // now that we get the score for the already existing pairs, we need to do the operations 
        // the operation can only change case of a character, thus there needs to be 2 or more characters int the same cell for the ops to happen

        for(int i = 0; i < 26; i++){
            // first doing for the lower case characters
            if(lower[i] >= 2){
                int freq = lower[i];
                if(freq % 2 != 0) freq--;
                if(k >= freq/2){
                    // then we are converting half the lowecase to uppercase thus points += freq/2
                    score += freq/2;
                    lower[i] -= freq;
                    k -= freq/2;
                }else{
                    // in case k is lesser then the entire k times gets used up
                    score += k;
                    k = 0;
                }
            }

            if(k == 0) break;
        }

        cout << score <<endl;
        // Debug
        // for(auto i : upper){
        //     cout << i << " ";
        // }
        // cout <<endl;
        // for(auto i : lower){
        //     cout << i << " ";
        // }

        // for(int i = 0; i < n; i++){

        // }
    }
}