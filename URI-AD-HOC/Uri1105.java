import java.util.Scanner;

public class Uri1105 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        while (leitor.hasNext()){
            int totBancos = leitor.nextInt();
            int totDebentures = leitor.nextInt();

            if(totDebentures == 0 && totBancos == 0)
                break;

            int[] reserva = new int[totBancos];

            for (int i = 0; i < reserva.length; i++){
                reserva[i] = leitor.nextInt();
            }
            for (int i = 0; i < totDebentures; i++){
                int devedor = leitor.nextInt();
                int credor = leitor.nextInt();
                int valorDivida = leitor.nextInt();

                reserva[devedor-1] -= valorDivida;
                reserva[credor-1] += valorDivida;
            }
            int socorro = 0;
            for (int i = 0; i < reserva.length; i++){
                if (reserva[i] < 0)
                    socorro++;
            }
            System.out.println(socorro > 0 ? "N" : "S");
        }
    }
}