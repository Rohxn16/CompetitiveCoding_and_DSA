#include <bits/stdc++.h>
using namespace std;


int minimumOperationsToMakeKPeriodic(string word, int k) {
        int maxops = 10e5;
        map<string,int> mp;
        
        for(int i = 0; i < word.size(); i++){
            string sub = word.substr(i,k);
            // string sub = "";
            mp[sub]++;
        }
        
        string max = "";
        int c = 0;
        
        for(auto i : mp){

            int len = i.first.size();
            string str = i.first;
            int c = i.second;
            
            int ops = (word.size() - (c * (str.size()))) / max.size();
            
            if(ops < maxops) maxops = ops;
        	
        }
        
        // int ops = (word.size() - (c * (max.size()))) / max.size();
        
        return maxops;
        
    }


    int main(){
    	string word = "leetcodeleet";
    	int len = 4;
    	int ans = minimumOperationsToMakeKPeriodic(word,len);
    	cout << ans <<endl;
    }