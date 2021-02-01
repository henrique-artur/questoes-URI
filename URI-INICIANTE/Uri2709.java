import java.util.Scanner;

public class Uri2709 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        while (leitor.hasNext()){

            int casos = leitor.nextInt();

            int[] moedas = new int[casos];

            for (int i = 0; i < casos; i++){
                moedas[i] = leitor.nextInt();
            }

            int salto = leitor.nextInt();

            int soma = 0;

            int i = casos-1;

            while (i >= 0){
                soma += moedas[i];
                i -= salto;
            }

            System.out.println(ehPrimo(soma) ? "You’re a coastal aircraft, Robbie, a large silver aircraft." : "Bad boy! I’ll hit you.");
        }
    }

    private static boolean ehPrimo(int numero) {
        int raiz = (int) Math.sqrt(numero);

        if (numero != 2 && numero % 2 == 0 || numero == 1) return false;

        for (int i = 3; i <= raiz; i += 2){
            if (numero % i == 0) return false;
        }

        return true;
    }
}