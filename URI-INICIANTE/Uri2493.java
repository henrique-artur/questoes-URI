import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Uri2493 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        while (leitor.hasNext()){
            int jogadores = leitor.nextInt();

            int[] x = new int[jogadores];
            int[] y = new int[jogadores];
            int[] z = new int[jogadores];

            for (int i = 0; i < jogadores; i++){
                int xResp = leitor.nextInt();
                String[] resposta = leitor.next().split("=");

                x[i] = xResp;
                y[i] = Integer.parseInt(resposta[0]);
                z[i] = Integer.parseInt(resposta[1]);
            }
            clearBuffer(leitor);

            int[] opcao = new int[jogadores];
            String[] nome = new String[jogadores];
            String[] operator = new String[jogadores];

            for (int i = 0; i < jogadores; i++){
                String[] input = leitor.nextLine().split(" ");

                nome[i] = input[0];
                opcao[i] = Integer.parseInt(input[1]);
                operator[i] = input[2];
            }

            ArrayList<String> winners = new ArrayList<>(jogadores);
            ArrayList<String> losers = new ArrayList<>(jogadores);

            for (int i = 0; i < jogadores; i++){

                int escolha = opcao[i]-1;

                if (operator[i].equals("+")){
                    if (x[escolha] + y[escolha] == z[escolha]){
                        winners.add(nome[i]);
                    }
                    else {
                        losers.add(nome[i]);
                    }
                }
                if (operator[i].equals("-")){
                    if (x[escolha] - y[escolha] == z[escolha]){
                        winners.add(nome[i]);
                    }
                    else {
                        losers.add(nome[i]);
                    }
                }
                if (operator[i].equals("*")){
                    if (x[escolha] * y[escolha] == z[escolha]){
                        winners.add(nome[i]);
                    }
                    else {
                        losers.add(nome[i]);
                    }
                }
                if (operator[i].equals("I")){
                    if (x[escolha] + y[escolha] != z[escolha] &&
                            x[escolha] - y[escolha] != z[escolha] &&
                            x[escolha] * y[escolha] != z[escolha]){
                        winners.add(nome[i]);
                    }
                    else {
                        losers.add(nome[i]);
                    }
                }
            }

            if(winners.size() == jogadores){
                System.out.println("You Shall All Pass!");
            }
            else if(losers.size() == jogadores){
                System.out.println("None Shall Pass!");
            }
            else {
                Collections.sort(losers);
                for (int j = 0; j < losers.size(); j++) {
                    if(j != losers.size()-1)
                        System.out.printf("%s ", losers.get(j));
                    else
                        System.out.printf("%s\n", losers.get(j));
                }
            }
        }
    }

    private static void clearBuffer(Scanner scanner) {
        if (scanner.hasNextLine()) {
            scanner.nextLine();
        }
    }
}