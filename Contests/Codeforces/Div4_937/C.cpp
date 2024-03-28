#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string h = s.substr(0,2);
        string m = s.substr(3,2);
        string suffix = "";
        
        int hr = stoi(h);
        int min = stoi(m);
        string am[12] = {"12","01","02","03","04","05","06","07","08","09","10","11"};
        //here comes the calculation
        string finaltime = "";
        if(hr >= 0 && hr <= 11){
            suffix = " AM";
            finaltime.append(am[hr]);
            finaltime.append(":");
            finaltime.append(m);
            finaltime.append(suffix);
        }else{
            suffix = " PM";
            hr = hr - 12;
            finaltime.append(am[hr]);
            finaltime.append(":");
            finaltime.append(m);
            finaltime.append(suffix);
        }

        cout << finaltime <<endl;

    }
}