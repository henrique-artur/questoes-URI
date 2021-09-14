import java.util.Scanner;

public class Uri1237 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNext()) {
            String str1 = scanner.nextLine();
            String str2 = scanner.nextLine();

            System.out.println(LCSS(str1, str2));
        }
    }

    private static int LCSS(String str1, String str2) {
        int m = str1.length(), n = str2.length(), maxLength = 0;

        int[][] lookup = new int[m+1][n+1];

        for (int i = 0; i < m+1; i++) {
            for (int j = 0; j < n+1; j++){
                lookup[i][j] = 0;
            }
        }

        for (int i = 1; i < m+1; i++) {
            for (int j = 1; j < n+1; j++) {
                if(str1.charAt(i-1) == str2.charAt(j-1)) {
                    lookup[i][j] = lookup[i-1][j-1] + 1;

                    if(lookup[i][j] > maxLength) {
                        maxLength = lookup[i][j];
                    }
                }
            }
        }

        return maxLength;
    }
}
