import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

public class smallestNumberOnLeft {
    public static void main(String[] args) {
        int[] a = {4, 6, 7, 3, 7, 7, 3, 5};
        String s = "hari";
        
        System.out.println(func(a.length, a));

    }

    public static List<Integer> func(int n, int[] a){
        List<Integer> num = new ArrayList<>();
        Stack<Integer> stack = new Stack<>();
        for(int i = 0; i< n; i++){
            if(stack.isEmpty()){
                stack.push(a[i]);
                num.add(-1);
                continue;
            }

            if(a[i]> stack.peek()){
                num.add(stack.peek());
                stack.push(a[i]);
                continue;
            }
            boolean check = false;
            while(!stack.isEmpty()){
                int number = stack.peek();
                
                if(number< a[i]){
                    num.add(number);
                    check = true;
                    break;
                }
                stack.pop();
            }
            if(!check){
                num.add(-1);
                check = false;
            } 
            
            stack.push(a[i]);

        }
        return num;

    }
}
