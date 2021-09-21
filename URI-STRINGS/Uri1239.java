import java.util.Scanner;

public class Uri1239 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNext()) {
            String text = scanner.nextLine();

            int operatorSub = 0;
            int operatorAst = 0;

            StringBuilder strFinal = new StringBuilder();

            for (int i = 0; i < text.length(); i++) {
                switch (text.charAt(i)) {
                    case '_':
                        if (operatorAst % 2 == 1) {
                            strFinal.append("</i>");
                        } else {
                            strFinal.append("<i>");
                        }
                        operatorAst++;
                        break;
                    case '*':
                        if (operatorSub % 2 == 1) {
                            strFinal.append("</b>");
                        } else {
                            strFinal.append("<b>");
                        }
                        operatorSub++;
                        break;
                    default:
                        strFinal.append(text.charAt(i));
                }
            }
            System.out.println(strFinal);
        }
    }
}
