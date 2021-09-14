import java.util.Scanner;

public class Uri1235 {
    public static void main(String[] args) {
        Scanner lector = new Scanner(System.in);
        int casesTest = lector.nextInt();
        clearBuffer(lector);

        for (int i = 0; i < casesTest; i++) {
            String input = lector.nextLine();
            String firstPart = new StringBuilder(input.substring(0, input.length()/2)).reverse().toString();
            String secondPart = new StringBuilder(input.substring(input.length()/2)).reverse().toString();
            System.out.println(firstPart + secondPart);
        }
    }

    private static void clearBuffer(Scanner scanner) {
        if (scanner.hasNextLine()) {
            scanner.nextLine();
        }
    }
}
