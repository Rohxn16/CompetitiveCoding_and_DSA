public class specialF{

    public static int specialFibonacci(int a, int b, int n){
        if(n == 0) return a;
        if(n == 1) return b;
        if(n == 2) return a ^ b;
        else{
            return specialFibonacci(a, b, n%3);
        }
    }

    public static void main(String[] args) {
        int res = specialFibonacci(93, 35, 86);
        System.out.println(res);
    }
}
