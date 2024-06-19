public class reverseRecursive {
    static String reverse(String str){
        if(str.length() == 1) return str;
        else return str.charAt(str.length()-1) + str.substring(1);
    }
    public static void main(String[] args) {
        String str = "Rohan";
        String rev = reverse(str);
        System.out.println(rev);
    }
}
