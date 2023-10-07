
import java.lang.StringBuilder;


public class practice{
    public static void main(String[] args){
        System.out.println(StringMerge("123hg*aaabb"));
    }

    public static String StringMerge(String str) {
        int middle = str.indexOf('*');
        System.out.println(middle);

        String first = str.substring(0, middle);
        String second = str.substring(middle+1, str.length());
        StringBuilder result = new StringBuilder();

        for (int x = 0; x < middle; x++)
        {

            result.append(first.charAt(x));
            result.append(second.charAt(x));
        }

        return result.toString();
    }
}