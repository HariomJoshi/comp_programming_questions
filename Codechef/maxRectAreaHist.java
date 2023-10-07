import java.util.Arrays;
import java.util.Stack;

public class maxRectAreaHist {
    public static void main(String[] args) {
        long[] hist = {6,2,5,4,5,1,6};
        long n = hist.length;
        long ans = getMaxArea(hist, n);
        System.out.println(ans);
        
    }

    public static long getMaxArea(long hist[], long n) 
    {
        // your code here
        Stack<Integer> stack = new Stack<>();
        long[] leftS = new long[(int) n];
        long[] rightS = new long[(int) n];
        for(int i=0; i< n; i++){
            if(stack.isEmpty()){// only one time use
                stack.push(i);
                leftS[i] = -1;
                continue;
            }

            if(hist[stack.peek()]< hist[i]){
                leftS[i] = stack.peek();
                stack.push(i);
                continue;

            }

            boolean check = false;
            while(!stack.isEmpty()){
                long num = hist[stack.peek()];
                if(num >= hist[i]){
                    stack.pop();
                }else{ // only one time per loop
                    leftS[i] = stack.peek();
                    check = true;
                    break;
                }
            }
            if(!check){
                leftS[i] = -1;
            }

            stack.push(i);
        }

        // next smaller
        stack.removeAllElements();
        for(int i=(int) (n-1); i>=0; i--){
            if(stack.isEmpty()){// only one time use
                stack.push(i);
                rightS[i] = n;
                continue;
            }

            if(hist[stack.peek()]< hist[i]){
                rightS[i] = stack.peek();
                stack.push(i);
                continue;

            }

            boolean check = false;
            while(!stack.isEmpty()){
                long num = hist[stack.peek()];
                if(num >= hist[i]){
                    stack.pop();
                }else{ // only one time per loop
                    rightS[i] = stack.peek();
                    check = true;
                    break;
                }
            }
            if(!check){
                rightS[i] = n;
            }

            stack.push(i);
        }

        // leftS and rightS arrays are ready now we just have to find the maximum area.
        long maxArea = Integer.MIN_VALUE;
        for(int i =0; i< n; i++){
            long area = 0;
            if(leftS[i] == -1){
                area = rightS[i]*hist[i];
            }else{
                area = (rightS[i] - leftS[i] -1)*hist[i];
            }

            if(area> maxArea){
                maxArea = area;
            }
        }
        return maxArea;
        
    }
}
