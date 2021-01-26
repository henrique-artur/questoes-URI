import java.util.Scanner;

public class Uri2780 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int distancia = leitor.nextInt();

        if (distancia <= 800){
            System.out.println(1);
        }
        else if(distancia <= 1400){
            System.out.println(2);
        }
        else {
            System.out.println(3);
        }
    }
}