import java.util.Arrays;

public class trappingWater{
    public static void main(String[] args) {
        int[] height = {0,1,0,2,1,0,1,3,2,1,2,1};
        System.out.println(trap(height, height.length));        
    }

    public static int trap(int[] height, int size){
        int[] left = new int[size];
        int[] right = new int[size];
        int m = Integer.MIN_VALUE;
        for(int i=0; i<size;i++){
            m = Math.max(m, height[i]);
            left[i] = m;
        }
        m = Integer.MIN_VALUE;
        for(int i=size-1; i>=0;i--){
            m = Math.max(m, height[i]);
            right[i] = m;
        }
        System.out.println(Arrays.toString(left));
        System.out.println(Arrays.toString(right));
        int finalSum =0;
        for(int i =0; i<size; i++){
            finalSum += Math.min(left[i], right[i])-height[i];
        }

        return finalSum;
    }
}