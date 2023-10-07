import java.util.Scanner;

public class candies {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int T = scan.nextInt();
        for(int i = 0; i< T; i++){
            int N = scan.nextInt();
            int X = scan.nextInt();
            if(N<X){
                System.out.println(0);
            }
            else if((N-X)%4 == 0){
                System.out.println((N-X)/4);
            }else{
                System.out.println((N-X)/4 +1);
            }
        }
    }
}
