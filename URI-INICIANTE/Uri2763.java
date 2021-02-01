import java.util.Scanner;

public class Uri2763 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        String cpf = leitor.next();

        cpf = cpf.replace("-", ".");

        String[] saida = cpf.split("\\.");

        System.out.println(saida[0]);
        System.out.println(saida[1]);
        System.out.println(saida[2]);
        System.out.println(saida[3]);
    }
}