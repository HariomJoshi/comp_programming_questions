import java.util.Scanner;

public class Lab12 {
    public static void main(String[] args) {
        SieveOfEratosthenes mc = new SieveOfEratosthenes();
        mc.setP(90);  // enter the number 
        mc.sieve();
        mc.printp();
      
    }
}

class SieveOfEratosthenes {
    final int MAXSIZE = 100;  // you can alter the max size if you want
    boolean p[];
    int n;
  
    SieveOfEratosthenes() {
        p = new boolean[MAXSIZE];
        n = 0;
    }
  
    void setP(int nn) {
        n = nn;
        for(int i =2; i<n; i++){
            p[i] = true;
        }

    }

    void sieve() {
        for(int i =2; i*i<n; i++){
            if(p[i] == true){
                for(int j = i*i; j<=n; j+=i){
                    p[j] = false;
                }
            }
        }
      
    }
    // the sieve has been formed
    // now we just need to use the seive to print the desired elements
    // (prime here)
  
    void printp() {
        for(int i =2; i<=n; i++){
            if(p[i] == true){
                System.out.print(i + " ");  // you can format this in desired way
            }
        }
    }
}


