import java.util.Scanner;

public class Uri1031 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        while (leitor.hasNext()){
            int regioes = leitor.nextInt();
            if (regioes == 0) break;

            int pulo = 1;
            while (true){
                if (josephus(regioes, pulo) != 11)
                    pulo++;
                else
                    break;
            }

            System.out.println(pulo);
        }
    }

    public static int josephus(int pessoas, int passos) {
        int retorno = 0;

        for (int i = 1; i < pessoas; ++i){
           retorno = (retorno + passos) % i;
        }

        return retorno;
    }
}