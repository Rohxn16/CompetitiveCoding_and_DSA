public class Rec3 {
    
    void oneToN(int n) {

        if(n == 0) {
            return;
        }

        else{
            oneToN(--n);
            System.out.println(n);
            
        }
    }

    int factorial(int n) {
        if(n == 0 || n == 1) return 1;
        else return n * factorial(n-1);
    }

    int sumOfDigits(int n) {
        if(n <= 9) return n;
        else return n%10 + sumOfDigits(n/10);
    }

    int count0s(int n) {
        if(n == 0) return 0;
        else if(n%10 == 0) return 1 + count0s(n/10);
        else return count0s(n/10);
    }

}
