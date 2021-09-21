import java.util.ArrayList;
import java.util.Scanner;

public class Uri1278 {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);

            int testsCase = scanner.nextInt();
            clearBuffer(scanner);
            int k = 0;

            do {
                ArrayList<StringBuilder> input = new ArrayList<>(testsCase);
                ArrayList<StringBuilder> output = new ArrayList<>(testsCase);

                int strLen = 0;

                for (int i = 0; i < testsCase; i++) {
                    input.add(new StringBuilder(scanner.nextLine().replaceAll("\\s+", " ").trim()));

                    if(input.get(i).length() > strLen) {
                        strLen = input.get(i).length();
                    }
                }

                for (StringBuilder item : input) {
                    if (item.length() < strLen) {
                        output.add(new StringBuilder(space(strLen - item.length())+item));
                    } else {
                        output.add(item);
                    }
                }

                if(k > 0) {
                    System.out.println();
                }

                output.forEach(System.out::println);

                testsCase = scanner.nextInt();
                clearBuffer(scanner);

                k++;
            } while (testsCase != 0);
        }

        private static String space(int numSpaces) {

            return " ".repeat(numSpaces);
        }

        public static void clearBuffer(Scanner scanner) {
            if (scanner.hasNextLine()){
                scanner.nextLine();
            }
        }
}
