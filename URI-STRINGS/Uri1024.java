import java.util.Scanner;

public class Uri1024 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int i = leitor.nextInt();
        clearBuffer(leitor);

        while (i > 0){

            String entrada = leitor.nextLine();

            int[] listaUnicode = extrairUnicode(entrada);

            primeiroPasso(listaUnicode);
            listaUnicode = reverse(listaUnicode);
            terceiroPasso(listaUnicode);

            System.out.println(decode(listaUnicode));
            i--;
        }

    }
    private static void clearBuffer(Scanner scanner) {
        if (scanner.hasNextLine()) {
            scanner.nextLine();
        }
    }
    private static String decode(int[] lista){
        String strFinal = "";
        for (int i = 0; i < lista.length; i++){
            strFinal += (char) lista[i];
        }
        return strFinal;
    }

    private static void primeiroPasso(int[] lista){
        for(int i = 0; i < lista.length; i++){
            if(lista[i] >= 65 && lista[i] <= 90 ||
                    lista[i] >= 97 && lista[i] <= 122){
                lista[i] += 3;
            }
        }
        return lista;
    }
    private static int[] reverse(int[] lista){

        int tamanho = lista.length;
        int[] arrayAux = new int[tamanho];

        for (int i = 0; i < arrayAux.length; i++) {
            tamanho--;
            arrayAux[i] = lista[tamanho];
        }
        return arrayAux;
    }
    private static int[] extrairUnicode(String texto){
        int[] lista = new int[texto.length()];
        for (int i = 0; i < texto.length(); i++){
            lista[i] = texto.codePointAt(i);
        }
        return lista;
    }
    private static void terceiroPasso(int[] lista){

        for (int i = lista.length/2; i < lista.length; i++){
            if(lista[i] >= 32 && lista[i] <= 176){
                lista[i] -= 1;
            }
        }
    }
}
