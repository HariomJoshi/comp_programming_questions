public class josephusProblem {
    public static void main(String[] args){
        System.out.println(shoot(7, 4));
    }


    public static int shoot(int n, int k){
        if(n == 1){  // base condition
            return n;
        }
        return (shoot(n-1, k)+k)%n;
    }
}