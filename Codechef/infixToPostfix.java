
import java.util.ArrayList;
import java.util.Arrays;
import java.util.PriorityQueue;
import java.util.Stack;

public class infixToPostfix {
    public static void main(String[] args) {
        String s = "(1+(4+5+2)-3)+(6+8)";
        s = s.replaceAll(" ", "");
        char[] arr = s.toCharArray();
        String postfix = func(arr);
        System.out.println(calcluateValue(postfix));
        PriorityQueue<Integer> queue = new PriorityQueue<>();

    }

    public static String func(char[] arr){
        // char[] arr = exp.toCharArray();
        StringBuilder builder = new StringBuilder();
        Stack<Character> stack = new Stack<>();
        for(int i =0; i<arr.length; i++){
            if(arr[i] ==')'){
                while(stack.peek() != '('){
                    // System.out.print(stack.pop());
                    builder.append(stack.pop());
                }
                stack.pop();  // remooving the opening bracket
                continue;
            }

            if(isOperand(arr[i])){
                // System.out.print(arr[i]);
                builder.append(arr[i]);

            }else{
                if(stack.isEmpty() || arr[i] == '('){
                    stack.push(arr[i]);
                    continue;
                }
                if(precedence(arr[i], stack.peek()) == "HIGHER"){
                    stack.push(arr[i]);
                }else{
                    while( !stack.isEmpty() && precedence(arr[i], stack.peek()) != "HIGHER"){
                        // System.out.print(stack.pop()); 
                        builder.append(stack.pop()); 
                    }
                    stack.push(arr[i]);
                    
                }
                
            }


        }
        while(!stack.isEmpty()){
            // System.out.print(stack.pop());
            builder.append(stack.pop());
        }

        return builder.toString();
    }

    public static boolean isOperand(char ch){
        if(ch == '^'|| ch == '*'|| ch == '/'|| ch == '+'|| ch == '-' || ch == '('){
            return false;
        }else{
            return true;
        }
    }

    public static String precedence(char a, char b){  // remember we are comparing a with b

        if((a == '^') || (a == '*' || a == '/') && (b == '+' || b =='-') || (a == '(' || b == '(')){
            return "HIGHER";
        }else if(( a == '*'|| a == '/') && (b == '/' || b =='*') || ((a == '+' || a == '-') && (b =='-' && b == '+'))){
            return "SAME";
        }else{
            return "LOWER";
        }
    }




    public static int calcluateValue(String postfix){
        char[] arr = postfix.toCharArray();
        System.out.println(Arrays.toString(arr));
        Stack<Integer> stack = new Stack<>();
        for(int i =0; i< arr.length; i++){
            if(isOperand(arr[i])){
                stack.push(Character.getNumericValue(arr[i]));
            }else{
                int n1 = stack.pop();
                int n2 = stack.pop();
                // System.out.println(n2);
                stack.push(calculate(n2, n1, arr[i]));
            }
        }
        return stack.pop();

    }

    public static int calculate(int a, int b, char op){
        if(op == '+'){
            return a+b;
        }else if(op == '-'){
            return a-b;
        }else if(op == '/'){
            return a/b;
        }else if(op == '*'){
            return a*b;
        }else if(op == '^'){
            return (int)Math.pow(a, b);
        }
        return -1;
    }
}
