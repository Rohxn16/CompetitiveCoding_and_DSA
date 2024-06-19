import java.util.Scanner;
public class InsertionSort{

    public static void printArray(int arr[]){
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
    }

    public static void insertionSort(int arr[], int n){
        if(n == 1) return;

        for(int i = 1; i < n; i++){

            for(int j = i; j > 0; j--){
                if(arr[j] < arr[j-1]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                }
            }
        }

        printArray(arr);
    }

    public static void main(String args[]){
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the array elements : ");
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        insertionSort(arr,n);
        sc.close();
    }
}