import java.util.Scanner;

public class Uri1240 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int casosTeste = leitor.nextInt();
        clearBuffer(leitor);

        while (casosTeste > 0) {
            int combina = 0;

            String str1 = leitor.next();
            String str2 = leitor.next();
            if (str1.length() >= str2.length()){
                for (int i = str1.length()-str2.length(), j = 0; j < str2.length(); i++, j++){
                    if (str1.charAt(i) == str2.charAt(j)){
                        combina++;
                    }
                }
                System.out.println(combina == str2.length() ? "encaixa" : "nao encaixa");
            }
            else {
                System.out.println("nao encaixa");
            }

            casosTeste--;
        }
    }
    private static void clearBuffer(Scanner scanner) {
        if (scanner.hasNextLine()) {
            scanner.nextLine();
        }
    }
}