#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // implementing stacks
    stack<int> st;
    for(int i = 0; i < 5; i++){
        st.push(i);
    }

    for(int i = 0; i < 5; i++){
        cout << st.top() <<" ";
        st.pop();
    }

    cout << endl;

    // queues as FIFO 

    queue<int>q;
    for(int i = 0; i < 5; i++){
        q.push(i);
    }
    for(int i =0; i < 5; i++){
        cout << q.front() <<" ";
        q.pop();
    }
    return 0;
}
