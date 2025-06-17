
import java.util.Scanner;

public class Rec1{

boolean palindromeCheck(String str) {
    if(str.charAt(0) != str.charAt(str.length() - 1)) return false;
    if(str.length() == 1 || str.length() == 0) return true;
    else return palindromeCheck(str.substring(1, str.length()-1));
}

    public static void main(String [] args) {
        Scanner sc = new Scanner(System.in);
        Rec1 ob = new Rec1();
        
        System.out.println("Enter a word : ");
        String str = sc.next();
        
        if(ob.palindromeCheck(str.toLowerCase())) System.out.println("Palindrome String");
        else System.out.println("Not Palindrome");
        
        sc.close();
    }
}