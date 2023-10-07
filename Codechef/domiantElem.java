import java.util.Arrays;

public class domiantElem {
    public static void main(String[] args) {
        int[] arr = {2,3,4, 4, 5,5};
        System.out.println(dominantElem(arr, arr.length));
    }

    public static int dominantElem(int[] arr, int n){
        int[] count = new int[n+1];
        for(int j =0; j<n; j++){
            count[arr[j]]++;
        }
        // our count array is ready
        int max = Integer.MIN_VALUE;
        for(int j =0; j<=n; j++){
            max = Math.max(max, count[j]);
        }
        // check for exclusivity of max Count
        int maxCount =0;
        for(int j=0; j<=n; j++){
            if(count[j] == max){
                maxCount++;
            }
        }
        return maxCount;

    }
}
