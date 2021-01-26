import java.util.Scanner;

public class Uri2770 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        while (leitor.hasNext()){

            int xP = leitor.nextInt();
            int yP = leitor.nextInt();

            long pedidos = leitor.nextLong();

            for (long i = 0; i < pedidos; i++){
                int xPci = leitor.nextInt();
                int yPci = leitor.nextInt();

                if (xPci <= xP && yPci <= yP || xPci <= yP && yPci <= xP){
                    System.out.println("Sim");
                }
                else {
                    System.out.println("Nao");
                }
            }

        }
    }
}