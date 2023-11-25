#include<bits/stdc++.h>
using namespace std;
int solution (int N, string S) {
   // Write your code here
  int newmax = 0;
  int max = 0;
  for(char ch : S){
    if(ch == '0'){
      newmax = 0;
    }else{
      newmax++;
    }
    if(newmax > max){
    	max = newmax;
    }
  }
  return max;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int out_;
        out_ = solution(N, S);
        cout << out_;
        cout << "\n";
    }
}
