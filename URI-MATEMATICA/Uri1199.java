package com.tutu.uri.resolvido;

import java.util.Scanner;

public class Uri1199 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        while (leitor.hasNext()){
            String str = leitor.next();

            if (str.contains("0x")) {
                String hexa = str.substring(2).toUpperCase();

                long numFinal = 0;

                for (int i = 0, j = 1; i < hexa.length(); i++, j++){

                    int num;

                    switch (hexa.charAt(i)){
                        case 'A':
                            num = 10;
                            break;
                        case 'B':
                            num = 11;
                            break;
                        case 'C':
                            num = 12;
                            break;
                        case 'D':
                            num = 13;
                            break;
                        case 'E':
                            num = 14;
                            break;
                        case 'F':
                            num = 15;
                            break;
                        default:
                            num = Integer.parseInt(String.valueOf(hexa.charAt(i)));
                            break;
                    }

                    numFinal += (int) (num * Math.pow(16, hexa.length()-j));

                }

                System.out.println(numFinal);
            }
            else if (Integer.parseInt(str) < 0) {
                break;
            }
            else {
                System.out.printf("0x%H\n", Integer.parseInt(str));
            }
        }
    }
}
