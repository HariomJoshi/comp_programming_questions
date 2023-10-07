import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;


public class distElemWindow {
    public static void main(String[] args) {
        int[] arr = {1,2,1,3,4,2,3};
        System.out.println(fn(arr, arr.length, 4));
        System.out.println(fn2(arr, arr.length, 4));
    }

    public static ArrayList<Integer> fn(int[] A, int n, int k){
        ArrayList <Integer> ans = new ArrayList<>();
        HashSet<Integer> set = new HashSet<>();
        for(int i =0; i<= n-k; i++){
            for(int j =i; j< i+k; j++){
                set.add(A[j]);
            }
            ans.add(set.size());
            set.clear();
        }
        return ans;
    }

    // following function is done in linear time
    public static ArrayList<Integer> fn2(int[] A, int n, int k){
        ArrayList<Integer> ans = new ArrayList<>();
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i =0; i< k; i++){
            if(map.containsKey(A[i])){
                map.put(A[i], map.get(A[i])+1);
            }else{
                map.put(A[i], 1);
            }    
        }
        ans.add(map.size());
        for(int i=k; i<n; i++){
            // remove the last one
            if(map.get(A[i-k]) == 1){
                map.remove(A[i-k]);
            }else{
                map.put(A[i-k], map.get(A[i-k])-1);
            }

            // add the next one
            if(map.containsKey(A[i])){
                map.put(A[i], map.get(A[i])+1);
            }else{
                map.put(A[i], 1);
            }
            ans.add(map.size());
            
        }
        return ans;
    }

}
