// tripple complexity will be too much of a disrespect

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int type[n];
        int val[n];
        set<int> t;

        for(int i = 0; i < n; i++){
            cin >> type[i];
            t.insert(type[i]);
        }
        
        for(int i = 0; i < n; i++){
            cin >> val[i];
        }
        int sum = 0;

        //  lets try using 2 sets
        for(int itr : t){
            int max = INT_MIN;
            for(int i = 0; i < n; i++){
                if(type[i] == itr){
                    if(val[i] > max){
                        max = val[i];
                    }
                }
            }
            if(max > 0){
                sum += max;
            }

        }

        cout << sum <<endl;

    }
    
    return 0;
}


// this is just embarassing
