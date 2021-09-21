import java.util.Scanner;

public class Uri1272 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int testsCase = scanner.nextInt();
        clearBuffer(scanner);

        for (int i = 0; i < testsCase; i++) {
            StringBuilder strFinal = new StringBuilder();
            String[] input = scanner.nextLine().split(" ");

            for (String s : input) {
                if (!s.equals("")) {
                    strFinal.append(s.charAt(0));
                }
            }

            System.out.println(strFinal);
        }
    }

    public static void clearBuffer(Scanner scanner) {
        if (scanner.hasNextLine()){
            scanner.nextLine();
        }
    }
}
