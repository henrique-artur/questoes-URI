import java.util.Scanner;

public class Uri2783 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int numFig = leitor.nextInt(), figCarimbada = leitor.nextInt(), figCompradas = leitor.nextInt();
        int figPreenchida = figCarimbada;
        int[] totCarimbadas = new int[figCarimbada];
        int[] totCompradas = new int[figCompradas];
        for (int i = 0; i < figCarimbada; i++){
            totCarimbadas[i] = leitor.nextInt();
        }
        for (int i = 0; i < figCompradas; i++){
            totCompradas[i] = leitor.nextInt();
        }
        for (int i = 0; i < figCarimbada; i++){
            for (int j = 0; j < figCompradas; j++){
                if (totCarimbadas[i] == totCompradas[j]){
                    figPreenchida--;
                    break;
                }
            }
        }

        System.out.println(figPreenchida);

    }
}