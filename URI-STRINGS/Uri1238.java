import java.util.Scanner;

public class Uri1238 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int testCases = scanner.nextInt();

        for (int i = 0; i < testCases; i++) {
            String str1 = scanner.next();
            String str2 = scanner.next();

            StringBuilder strFinal = new StringBuilder();

            int minStr = Math.min(str2.length(), str1.length());
            int maxStr = Math.max(str2.length(), str1.length());

            for (int j = 0; j < minStr; j++) {
                strFinal.append(str1.charAt(j)).append(str2.charAt(j));
            }

            if(minStr != maxStr) {
                if (str1.length() == maxStr) {
                    strFinal.append(str1, minStr, maxStr);
                }
                else {
                    strFinal.append(str2, minStr, maxStr);
                }
            }

            System.out.println(strFinal);
        }
    }
}
