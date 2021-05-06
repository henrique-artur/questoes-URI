package com.tutu.uri.resolvido;

import java.util.Scanner;

public class Uri2712 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int casos = leitor.nextInt();

        while (casos > 0){
            String input = leitor.next();

            while (true) {

                if(input.length() == 8) {

                    if(input.charAt(3) == '-'){
                        if ((input.codePointAt(0) > 90 || input.codePointAt(0) < 65) || (input.codePointAt(1) > 90
                                || input.codePointAt(1) < 65 ) || (input.codePointAt(2) > 90 || input.codePointAt(2) < 65) ||
                                (input.codePointAt(4) > 57 || input.codePointAt(5) > 57 ||
                                input.codePointAt(6) > 57 || input.codePointAt(7) > 57)) {
                            System.out.println("FAILURE");
                            break;
                        }
                    }
                    else if(input.charAt(3) != '-'){
                        System.out.println("FAILURE");
                        break;
                    }

                    if (input.charAt(input.length() - 1) == '1' || input.charAt(input.length() - 1) == '2') {
                        System.out.println("MONDAY");
                        break;
                    }
                    if (input.charAt(input.length() - 1) == '3' || input.charAt(input.length() - 1) == '4') {
                        System.out.println("TUESDAY");
                        break;
                    }
                    if (input.charAt(input.length() - 1) == '5' || input.charAt(input.length() - 1) == '6') {
                        System.out.println("WEDNESDAY");
                        break;
                    }
                    if (input.charAt(input.length() - 1) == '7' || input.charAt(input.length() - 1) == '8') {
                        System.out.println("THURSDAY");
                        break;
                    }
                    if (input.charAt(input.length() - 1) == '9' || input.charAt(input.length() - 1) == '0') {
                        System.out.println("FRIDAY");
                        break;
                    }
                }
                else{
                    System.out.println("FAILURE");
                    break;
                }
            }

            casos--;
        }
    }
}
