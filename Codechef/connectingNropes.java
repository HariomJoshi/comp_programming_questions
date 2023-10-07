import java.util.PriorityQueue;

public class connectingNropes {
    public static void main(String[] args) {
        long[] arr = {4, 3, 2, 6};
        System.out.println(minCost(arr, arr.length));
    }

    public static long minCost(long[] arr, int n){
        PriorityQueue<Long> queue = new PriorityQueue<>();
        for(int i=0; i<n; i++){
            queue.add(arr[i]);

        }
        long finalSum = 0;
        while(queue.size() >1){
            long sum = queue.poll() + queue.poll();
            finalSum += sum;
            queue.add(sum);
        }
        return finalSum;  
    }
}
