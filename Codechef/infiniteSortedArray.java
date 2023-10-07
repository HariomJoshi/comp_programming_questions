public class infiniteSortedArray{
    public static void main(String[] args) {
        int[] arr = {2,4,5,6,8,9,11,15, 16, 18, 20, 24, 26, 27, 29, 35, 39, 42, 49, 54, 55, 69, 63, 70, 81, 90};
        System.out.println(find(arr, 49));
    }

    public static int find(int[] arr, int target){
        int s=0; 
        int e = 10;
        while(arr[e]< target){
            s = e+1; 
            e = e + 11;
        }
        while(s<=e){
            int m = s + (e-s)/2;
            if(arr[m] == target){
                return m;
            }
            else if(arr[m]< target){
                s = m+1;
            }
            else if(arr[m] > target){
                e = m-1;
            }
            
        }
        return -1; 
    }

}