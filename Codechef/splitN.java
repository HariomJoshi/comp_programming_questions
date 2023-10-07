import java.util.Scanner;

public class splitN {
    public static void main(String[] args) {
        split(65);
        Scanner scan = new Scanner(System.in);
        Long n = scan.nextLong();
    }

    public static void split(long N){

        long Y =0; 
        long X =0;
        int count =0;
		do{
            int pow = (int)(Math.log(N)/Math.log(2));
		    X = (int) Math.pow(2, pow); 
            Y = N-X;
            N = Y;
            if(X == Y){
                break;
            }
            if(Y!=0){
                count++;
            }
		}while(Math.log(Y)/Math.log(2) - Math.floor(Math.log(Y)/Math.log(2)) != 0f);
        System.out.println(count);
        
    }

}
