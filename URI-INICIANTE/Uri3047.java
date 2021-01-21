import java.util.Scanner;

public class Uri3047 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int idadeMonica, idadeFilho1, idadeFilho2;

        idadeMonica = leitor.nextInt();
        idadeFilho1 = leitor.nextInt();
        idadeFilho2 = leitor.nextInt();

        if(idadeMonica - (idadeFilho1+idadeFilho2) < idadeFilho1 && idadeFilho1 > idadeFilho2)
            System.out.println(idadeFilho1);
        else if (idadeMonica - (idadeFilho1+idadeFilho2) < idadeFilho2 && idadeFilho1 < idadeFilho2)
            System.out.println(idadeFilho2);
        else
            System.out.println(idadeMonica - (idadeFilho1+idadeFilho2));
    }
}