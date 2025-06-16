    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
    	int t;
    	cin >> t;
    	while(t--){
    		int n;
    		cin >> n;
    		vector<string> arr(n);
    		vector<int> sumarr(n);
    		for (int i = 0; i < n; i++)
    		{
    			int sum = 0;
    			string s;
    			cin >> s;
    			arr.push_back(s);
    			for(char ch : s){
    				if(ch == '1'){
    					sum++;
    				}
    			}
    			sumarr.push_back(sum);
    		}
     
    		// for(int i : sumarr){cout << i <<" ";}cout<<'\n';
    		// stdin complete
     
    		for(int i = 0; i < sumarr.size()-1; i++){
    			int a = sumarr[i];
    			int b = sumarr[i+1];
     
    			// cout << a <<" "<<b<<endl;
     
    			if(a == 0)continue;
    			else{
    				if(a == b){
    					cout << "SQUARE\n";
    					break;
    				}else{
    					cout << "TRIANGLE\n";
    					break;
    				}
    			}
    		}
     
    	}
    }