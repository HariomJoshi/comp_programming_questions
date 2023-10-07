import java.util.Scanner;

public class passTheExam {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int T= scan.nextInt();
        for(int i = 0;i< T; i++){
            int A = scan.nextInt();
            int B = scan.nextInt();
            int C = scan.nextInt();
            if(A>=10 && B >= 10 && C>=10 && (A+B+C)>=100) System.out.println("PASS");
            else System.out.println("FAIL");
        }
    }
}
