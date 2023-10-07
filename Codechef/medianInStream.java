
import java.util.Collections;
import java.util.PriorityQueue;
import java.util.Scanner;

public class medianInStream{
    public static void main(String[] args) {
        Solution sn = new Solution();
        Scanner scan =new Scanner(System.in);
        sn.insertHeap(0);
        sn.balanceHeaps();
        System.out.println(sn.getMedian());
        // System.out.println("I'm here");
        sn.insertHeap(0);
        sn.balanceHeaps();
        System.out.println(sn.getMedian());
        // sn.insertHeap(9);
        // sn.balanceHeaps();
        // System.out.println(sn.getMedian());
        scan.close();
        
    }
}



class Solution{
    public static PriorityQueue<Integer> min = new PriorityQueue<>();
    public static PriorityQueue<Integer> max = new PriorityQueue<>(Collections.reverseOrder());
    public int count =0;
    
    public void insertHeap(int x)
    {
        count++;
        if(max.isEmpty()){
            max.add(x);
            return;
        }
        if(x > max.peek()){
            min.add(x);
        }else{
            max.add(x);
        }
        balanceHeaps();

    }

    public void balanceHeaps()
    {
        while(max.size()> min.size()){
            min.add(max.poll());
        }

        while(min.size()> max.size()){
            max.add(min.poll());
        }
    }
       
    
    public double getMedian()
    {
        // if(count == 1){
        //     return max.peek();
        // }
        if((count%2) ==1){  //odd
            return max.peek();
        }else{  //even
            return (min.peek()+max.peek())/2.0;
        }
        
    }
    
}
