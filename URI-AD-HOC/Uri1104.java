import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Uri1104 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        while (true){
            int aline = leitor.nextInt();
            int bia = leitor.nextInt();
            if (aline==0 && bia==0) break;

            Set<Integer> cartasAline = new HashSet<>();
            Set<Integer> cartasBia = new HashSet<>();

            for (int i = 0; i < aline; i++){
                int input = leitor.nextInt();
                cartasAline.add(input);
            }

            for (int i = 0; i < bia; i++){
                int input = leitor.nextInt();
                cartasBia.add(input);
            }

            Set<Integer> diferenca = new HashSet<>(cartasAline);
            diferenca.removeIf(cartasBia::contains);

            int iguais = cartasAline.size() - diferenca.size();

            System.out.println(cartasAline.size() < cartasBia.size() ?
                    cartasAline.size() - iguais :
                    cartasBia.size() - iguais);
        }
    }
}