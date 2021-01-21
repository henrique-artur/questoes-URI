import java.util.Scanner;

public class Uri1030 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int casos = leitor.nextInt();
        int i = 1;

        while (casos > 0){

            int soldados = leitor.nextInt();
            int passos = leitor.nextInt();

            System.out.println("Case " + i + ": " + josephus(soldados, passos));

            i++;
            casos--;
        }
    }
    public static int josephus(int pessoas, int passos) {
        return pessoas > 1 ? (josephus(pessoas-1, passos) + passos - 1) % pessoas + 1 : 1;
    }
}