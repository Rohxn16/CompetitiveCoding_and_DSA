import java.util.ArrayList;

public class RecArrays {
    
    boolean checkSortedArray(int arr[], int i) {
        if(i == arr.length -1) return true;
        else{
            if(arr[i] < arr[i+1]) return checkSortedArray(arr, ++i);
            else return false;
        }
    }


    // find all target elements and put their indeces in an arraylist and return
    ArrayList<Integer> findAllIndeces(int arr[], int target, int index,  ArrayList<Integer> resuList) {

        if(index == arr.length) return resuList;
        else if(arr[index] == target) resuList.add(index);
        return findAllIndeces(arr, target, index+1, resuList);
    }

    void RotatedBinarySearch() {
        // TODO
    }
}
