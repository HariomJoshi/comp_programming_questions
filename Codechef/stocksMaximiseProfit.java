

public class stocksMaximiseProfit {
    public static void main(String[] args) {
        int[] arr = {2,3, 5, 1, 9, 4, 34};
        System.out.println(bruteForce(arr, arr.length));
        System.out.println(maxProfit2(arr, arr.length));
        System.out.println(maxProfit(arr, arr.length));
        System.out.println(part2(arr, arr.length));
        System.out.println(part2Opt(arr));
    }


    // now we have to do this in liner time complexity and constant space
    public static int maxProfit(int[] arr,int size){
        int minSoFar =Integer.MAX_VALUE;
        int psf = Integer.MIN_VALUE;
        for(int i=0; i<size;i++){
            if(arr[i]< minSoFar) minSoFar = arr[i];
            int s = arr[i] - minSoFar;
            if(s> psf){
                psf = s;    
            }

        }
        return psf;
    }

    public static int maxProfit2(int[] arr, int size){
        int[] b = new int[size];
        int max = Integer.MIN_VALUE;
        for(int i = size-1; i>=0; i--){
            if(arr[i]> max) max = arr[i];
            b[i] = max;
        }
        int maxProf = Integer.MIN_VALUE;
        for(int i =0; i<size; i++){
            if((b[i] - arr[i])> maxProf) maxProf = b[i] - arr[i];
        }
        return maxProf;
    }

    public static int bruteForce(int[] arr, int size){
        int max =Integer.MIN_VALUE;
        for(int i=0; i< size; i++){
            for(int j =i; j<size; j++){
                if(arr[j] -arr[i]> max){
                    max = arr[j] - arr[i];
                }
            }
            
        }
        return max;
    }

    // part 2, it is the same as above, the only difference is once sold we can buy the stocks again

    public static int part2(int[] arr, int size){
        int start = arr[0];
        int ans = 0;
        for(int i=1; i<size; i++){
            if(i == size -1){
                if(arr[i] > start){
                    ans += arr[i] - start;
                }
                return ans;
            }
            
            if(arr[i-1]< arr[i] && arr[i+1]< arr[i]){
                // it is a local maxima
                ans += arr[i] - start;
                start = 0;
                

            }else if(arr[i-1]> arr[i] && arr[i+1]> arr[i]){
                // local minima
                start = arr[i];
            }
        }
        return ans;
    }

    // more optimised

    public static int part2Opt(int[] prices){
        int ans = 0;
        for(int i =1; i< prices.length; i++){
            if(prices[i] > prices[i-1]){
                ans += prices[i] - prices[i-1];
            }
        }
        return ans;
    }
}
