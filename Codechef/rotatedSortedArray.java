import org.w3c.dom.html.HTMLButtonElement;

public class rotatedSortedArray {
    public static void main(String[] args) {
        int[] arr = {3,1};
        System.out.println(findPivot(arr, arr.length));
        System.out.println(find(arr, 1));
        System.out.println(search(arr, 1));
    }

    public static int find(int[] arr, int target){
        int size = arr.length;
        int pivot = findPivot(arr, size);
        int ans = bs(arr, target, 0, pivot);
        if(ans ==-1){
            ans = bs(arr, target, pivot+1, size-1);
        }
        return ans;
    }

    public static int bs(int[] a, int t, int s, int e){
        while(s<=e){
            int m = s + (e-s)/2;
            if(a[m] == t){      
                return m;
            }
            else if(a[m]< t){
                s = m+1;
            }
            else if(a[m] > t){
                e = m-1;
            }  
        }
        return -1;

    }

    public static int findPivot(int[] arr, int size){
        int s = 0;
        int e = size-1;
        while(s<=e){
            int m = s + (e-s)/2;
            if(m<e && arr[m]> arr[m+1]){
                return m;
            }
            else if(m>s && arr[m] < arr[m-1]){
                return m-1;
            }
            else if(arr[m]> arr[s]){
                s = m+1;
            }
            else{
                e = m-1;
            }
        }
        return 0;
    }

    // we can do the same question with another apprach as well

    public static int search(int[] arr, int target){
        int l = 0;
        int h = arr.length -1;
        while(l <=h){
            int m = l + (h-l)/2;
            if(arr[m] == target) return m;
            else if(arr[m]>= arr[l]){
                //left side is sorted, right side is not sorted
                if(arr[l] <= target && target < arr[m]){
                    h = m-1;
                }else{
                    l = m+1;
                }

            }else{
                // left side is not sorted, right side is sorted
                if(arr[m]<target && target <= arr[h]){
                    l = m+1;
                }else{
                    h = m-1;
                }
            }
        }
        return -1;
    }
}
