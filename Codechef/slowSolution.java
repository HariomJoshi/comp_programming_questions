import java.util.Scanner;
public class slowSolution {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int T = scan.nextInt();
        for(int i = 0; i< T; i++){
            int maxT = scan.nextInt();
            int maxN = scan.nextInt();
            int sumN = scan.nextInt();

            // now we have our variables ready
            if(maxN == 0){
                System.out.println(0);
                continue;
            }
            int n = sumN/maxN;
            
            int num = 0;
            if(n> maxT){
                n = maxT;
            }else{
                num = sumN - n*maxN;
            }
            System.out.println(n*(maxN * maxN) + (num*num));

        }
    }
    
}
