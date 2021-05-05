package com.tutu.uri.resolvido;

import java.util.Scanner;

public class Uri1234 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        StringBuilder string = new StringBuilder();

        while (leitor.hasNext()) {
            String str = leitor.nextLine();

            int j = 1;

            for(int i = 0; i < str.length(); i++){
                if(str.charAt(i) != ' ' && str.codePointAt(i) > 57){
                    if(j % 2 == 1 && (str.codePointAt(i) >= 97 && str.codePointAt(i) <= 122)) {
                        string.append((char) (str.codePointAt(i) - 32));
                    }
                    else if (j % 2 == 0 && (str.codePointAt(i) <= 90 && str.codePointAt(i) >= 65)){
                        string.append((char) (str.codePointAt(i) + 32));
                    }
                    else {
                        string.append((char) str.codePointAt(i));
                    }
                    j++;
                }
                else {
                    string.append((char) str.codePointAt(i));
                }
            }

            System.out.println(string);

            string.delete(0, string.length());
        }
    }
}
