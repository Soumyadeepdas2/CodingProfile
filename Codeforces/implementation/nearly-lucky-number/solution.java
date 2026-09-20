import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String n = sc.next();

        int count = 0;

        for(int i = 0; i < n.length(); i++) {

            char ch = n.charAt(i);

            if(ch == '4' || ch == '7') {
                count++;
            }
        }

        if(count == 4 || count == 7) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}