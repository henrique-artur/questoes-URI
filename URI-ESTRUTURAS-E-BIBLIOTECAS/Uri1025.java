package com.tutu.uri.resolvido;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Uri1025 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int caso = 1;

        while (true){
            int numMarmores = leitor.nextInt();
            int numConsultas = leitor.nextInt();
            if (numMarmores==0 && numConsultas==0) break;

            ArrayList<Integer> marbles = new ArrayList<>();

            for (int i = 0; i < numMarmores; i++){
                int j = leitor.nextInt();

                marbles.add(j);
            }

            Collections.sort(marbles);

            System.out.printf("CASE# %d:\n",caso);
            for (int i = 0; i < numConsultas; i++){
                int consulta = leitor.nextInt();

                int result = binarySearch(marbles, consulta, 0, marbles.size()-1);

                if (result != -1){
                    System.out.printf("%d found at %d\n", consulta, result+1);
                }
                else {
                    System.out.printf("%d not found\n", consulta);
                }
            }
            caso++;
        }
    }

    private static int binarySearch(ArrayList<Integer> lista, int item, int inicio, int fim){
        int meio = (inicio+fim)/2;

        if (lista.get(meio) == item){
            if (meio-1 != -1)
                if (lista.get(meio-1) == item)
                    return meio-1;
                else
                    return meio;
            else
                return meio;
        }
        if (inicio >= fim){
            return -1;
        }
        else {
            if (lista.get(meio) < item){
                return binarySearch(lista, item, meio+1, fim);
            }
            else {
                return binarySearch(lista, item, inicio, meio-1);
            }
        }
    }
}
