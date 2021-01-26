import java.util.Scanner;

public class Uri2786 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int linha = leitor.nextInt();
        int coluna = leitor.nextInt();

        System.out.println((linha * coluna) + (linha - 1) * (coluna - 1));
        System.out.println((2 * (linha - 1)) + (2 * (coluna - 1)));
    }
}