public class allocateMinPages {
    public static void main(String[] args) {
        int[] arr = {15,17,20};
        System.out.println(fn(arr, arr.length, 2));
        
    }

    public static int fn(int[] A, int N, int M){
        int l=0;
        int h=0;
        for(int i =0; i< N; i++){
            if(A[i]> l){
                l = A[i];
            }
            h += A[i];
        }
        // System.out.printf("Low: %d, High: %d", l, h);
        // we have our l and h ready
        while(l<=h){
            int m = (l+h)/2;
            int sum =0;
            int count = 1;
            for(int i=0; i<N;i++){
                sum += A[i];
                if(sum> m){
                    i--;
                    sum =0;
                    count ++;
                }
            }
            if(count > M){
                l = m+1;
            }else{
                h  = m-1;
            } 
        }
        return l;
        
    }
}
