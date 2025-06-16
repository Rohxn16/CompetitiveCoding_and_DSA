import java.util.Scanner;

// void printArray(int arr[], int n){
    //     for(int i = 0; i < n; i++){
        //         System.out.print(arr[i] + " ");
        //     }
        // }
        
public class BubbleSort{
public static void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        System.out.print(arr[i] + " ");
    }

    // printArray(arr,n);
}

public static void bubbleSortRecursive(int arr[], int n){
    if(n == 1) return;
    else{

        int c = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] < arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                c++;
            }
        }

        if(c == 0) {
            return;
        }
        if(c != 0) bubbleSortRecursive(arr,n-1);
    }
}


    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        int arr[] = new int[n];

        bubbleSort(arr,n);
        bubbleSortRecursive(arr,n);

        sc.close();
    }
}