#include <iostream>

using namespace std;

bool isPowerOfN(int n, int num){
    
    if(n == num || num == 1) return true;
    if(n > num) return false;

    else return isPowerOfN(n*n, num);

}

int main(int argc, char const *argv[])
{
    if(isPowerOfN(2,15)){
        cout << "yes\n";
    }else{
        cout << "no\n";
    }
    return 0;
}
