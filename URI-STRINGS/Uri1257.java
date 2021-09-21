import java.util.Scanner;

public class Uri1257 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        char[] letters = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
                'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

        int testsCase = scanner.nextInt();

        for (int i = 0; i < testsCase; i++) {
            int stringLines = scanner.nextInt();
            int hashFinal = 0;
            String[] inputString = new String[stringLines];

            for (int j = 0; j < stringLines; j++) {
                inputString[j] = scanner.next();
                int k = 0;

                while (k < inputString[j].length()) {
                    int l = 0;
                    while (true) {
                        if(inputString[j].charAt(k) == letters[l]) {
                            hashFinal += l + j + k;
                            break;
                        }
                        l++;
                    }
                    k++;
                }

            }
            System.out.println(hashFinal);
        }
    }
}
