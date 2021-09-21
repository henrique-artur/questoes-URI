import java.util.Scanner;

public class Uri1241 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int testCases = scanner.nextInt();

        for(int i = 0; i < testCases; i++) {
            String num1 = scanner.next();
            String num2 = scanner.next();

            if(num1.length() < num2.length()) {
                System.out.println("nao encaixa");
            } else {
               if(num1.endsWith(num2)) {
                   System.out.println("encaixa");
               } else {
                   System.out.println("nao encaixa");
               }
            }
        }
    }
}
