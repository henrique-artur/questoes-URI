import java.util.Scanner;

public class Uri1120 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        while (true){

            int erro = leitor.nextInt();
            String contrato = leitor.next();
            if(erro == 0 && contrato.equals("0")) break;

            String newStr = remove(erro, contrato);

            System.out.println(newStr);
        }
    }
    public static String remove(int num, String str){
        String newStr = "";
        String numChar = String.valueOf(num);
        for(int i = 0; i < str.length(); i++){
            if(numChar.charAt(0) != str.charAt(i)){
                newStr += str.charAt(i);
            }
        }

        if(newStr.length() == 0)
            return "0";
        else if (newStr.charAt(0) == '0')
            newStr = limpaZeros(newStr);

        return newStr;
    }
    private static String limpaZeros(String comZeros){
        String semZeros = "";
        for (int i = 0; i < comZeros.length(); i++){
            if (comZeros.charAt(i) != '0'){
                semZeros = comZeros.substring(i);
                break;
            }
        }
        if(semZeros.length() == 0){
            semZeros = "0";
        }
        return semZeros;
    }
}
