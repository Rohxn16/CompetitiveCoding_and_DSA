import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        // Rec1 ob = new Rec1();
        // System.out.println(ob.palindromeCheck("MADAM"));
        
        // Rec2 ob = new Rec2();
        int arr[] = {1,2,3,4,5,6,7,8,9,10};
        int ar2[] = {1,3,7,4,5,6,7,8,9,10};
        int ar3[] = {1,2,3,4,5,5,5,5,5,6,7,8};
        // System.out.println(ob.binarySearch(arr, 1, 0, 9));

        // Rec3 ob = new Rec3();
        // ob.oneToN(10);
        // System.out.println(ob.factorial(5));
        // System.out.println(ob.sumOfDigits(123));
        // System.out.println(ob.count0s(101011000));

        RecArrays ob = new RecArrays();
        System.out.println(ob.checkSortedArray(arr, 0));
        System.out.println(ob.checkSortedArray(ar2, 0));
        System.out.println(ob.findAllIndeces(ar3, 5, 0, new ArrayList<Integer>()));
    }
        
}
