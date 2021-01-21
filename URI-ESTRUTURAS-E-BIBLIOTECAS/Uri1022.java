import java.util.Scanner;

public class Uri1022 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int i = leitor.nextInt();
        clearBuffer(leitor);

        while (i > 0){
            String op;
            int d1, n1, d2, n2, nF, dF, div;

            String[] exp = leitor.nextLine().split(" ");

            n1 = Integer.parseInt(exp[0]);
            d1 = Integer.parseInt(exp[2]);
            n2 = Integer.parseInt(exp[4]);
            d2 = Integer.parseInt(exp[6]);

            op = exp[3];

            switch (op){
                case "+":
                    nF = n1 * d2 + n2 * d1;
                    dF = d1 * d2;
                    break;
                case "-":
                    nF = n1 * d2 - n2 * d1;
                    dF = d1 * d2;
                    break;
                case "*":
                    nF = n1 * n2;
                    dF = d1 * d2;
                    break;
                case "/":
                    nF = n1 * d2;
                    dF = n2 * d1;
                    break;
                default:
                    throw new IllegalStateException("Unexpected value: " + op);
            }

            div = MDC(nF, dF);

            if ((nF % div == 0) && (dF % div == 0)) {
                System.out.println(nF + "/" + dF + " = " + nF / div + "/" + dF / div);
            } else {
                System.out.println(nF + "/" + dF + " = " + nF + "/" + dF);
            }


            i--;
        }

    }
    public static int MDC(int a, int b){
        if(a < 0){
            a *= -1;
        }
        else if(b < 0){
            b *= -1;
        }

        int resto;

        while(b != 0){
            resto = a % b;
            a = b;
            b = resto;
        }

        return a;
    }
    private static void clearBuffer(Scanner scanner) {
        if (scanner.hasNextLine()) {
            scanner.nextLine();
        }
    }

}