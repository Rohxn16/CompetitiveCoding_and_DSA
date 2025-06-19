// implementing Binary search using recursion

public class Rec2 {

    int binarySearch(int arr[], int key, int left, int right) {
        
        if(left > right) return -1;
      
        int pivot = (left + right) / 2;
        
        if (arr [pivot] == key) return pivot;

        if (key < arr[pivot]){
          return binarySearch(arr,key,left,pivot-1);
        }

          return binarySearch(arr,key,pivot+1,right);
        
        
    }
}
