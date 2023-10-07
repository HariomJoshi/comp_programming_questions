import java.util.Scanner;

public class bidding{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int T = scan.nextInt();
        for(int i= 0; i< T; i++){
            int A = scan.nextInt();
            int B = scan.nextInt();
            int C = scan.nextInt();
            if(A>B && A> C){
                System.out.println("Alice");
            }
            else if(B>A && B> C){
                System.out.println("Bob");
            }
            else if(C>B && C> A){
                System.out.println("Charlie");
            }
            
        }
    }
}