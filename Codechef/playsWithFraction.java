import java.util.Scanner;
import java.lang.Math;

public class playsWithFraction {
    public static void main(String[] args) {
        func();
    }

    public static void func(){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        for(int i = 0; i< n; i++){
            float a = scan.nextInt();
            float b = scan.nextInt();
            float c = scan.nextInt();
            float d = scan.nextInt();
            System.out.println((a/c) * (d/b));
        }
    }
}
