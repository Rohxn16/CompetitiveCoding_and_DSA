public class sumTriangle {

    void sumTri(int arr[], int n){
        if(n == 1){
            System.out.println(arr[0]);
        }else{
            int temp[] = new int[n-1];
            for(int i = 0; i < n-1; i++){
                temp[i] = arr[i]+arr[i+1];
            }

            sumTri(temp, n-1);

            for(int i = 0; i < n; i++){
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5};
        sumTriangle ob = new sumTriangle();
        ob.sumTri(arr,5);
    }
}