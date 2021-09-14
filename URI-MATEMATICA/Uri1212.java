package com.tutu.uri.resolvido;

import java.util.Scanner;

public class Uri1212 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        String numberOne = leitor.next();
        String numberTwo = leitor.next();

        int inputValues;

        do {
            int carry = 0, valueCarry = 0, resultantSum = 0, j;

            for (j = 1; j <= Math.min(numberOne.length(), numberTwo.length()); j++) {
                final int sumValues = Integer.parseInt(String.valueOf(numberOne.charAt(numberOne.length() - j))) +
                        Integer.parseInt(String.valueOf(numberTwo.charAt(numberTwo.length() - j)));
                if (sumValues >= 10) {
                    carry++;
                    valueCarry = 1;
                } else if (valueCarry == 1) {
                    if (sumValues + valueCarry >= 10) {
                        carry++;
                    } else {
                        valueCarry = 0;
                    }
                }
            }

            if(numberOne.length() > numberTwo.length()) {
                resultantSum = Integer.parseInt(String.valueOf(numberOne.charAt(numberOne.length() - j)));
            } else if(numberOne.length() < numberTwo.length()) {
                resultantSum = Integer.parseInt(String.valueOf(numberTwo.charAt(numberTwo.length() - j)));
            }

            if (valueCarry == 1 && resultantSum > 0) {
                if (resultantSum + valueCarry >= 10) {
                    carry++;
                }
            }

            if(carry == 0) {
                System.out.println("No carry operation.");
            } else {
                if(carry > 1) {
                    System.out.println(carry + " carry operations.");
                } else {
                    System.out.println(carry + " carry operation.");
                }
            }

            numberOne = leitor.next();
            numberTwo = leitor.next();

            inputValues = Integer.parseInt(numberOne) + Integer.parseInt(numberTwo);
        } while (inputValues != 0);
    }
}
