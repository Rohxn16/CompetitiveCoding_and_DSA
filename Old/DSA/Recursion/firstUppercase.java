public class firstUppercase {

    public static char first_uppercase(String s){
        if(s.length() == 1){
            if(Character.isUpperCase(s.charAt(0))) return s.charAt(0);
            else return '%';
        }else{
            if(Character.isUpperCase(s.charAt(0))) return s.charAt(0);
            else return first_uppercase(s.substring(1));
        }
    }

    public static void main(String[] args) {
         char ans = first_uppercase("rohandey");
         System.out.println(ans);
    }
}
