import java.math.RoundingMode;
import java.text.DecimalFormat;
import java.util.*;

public class Uri1023 {

    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int casos = 1;

        while (true){

            int i = leitor.nextInt();
            if(i == 0) break;

            SortedMap<Integer, Integer> map = new TreeMap<>();
            ArrayList<Integer> newArray = new ArrayList<>();

            int consumoTotal = 0;
            int totPessoas = 0;


            for (int j = 0; j < i; j++){
                int pessoasCasa = leitor.nextInt();
                int consumoAgua = leitor.nextInt();

                consumoTotal += consumoAgua;
                totPessoas += pessoasCasa;

                int consumoPerCapta = (int) Math.floor((double) consumoAgua / pessoasCasa);

                if(map.containsKey(consumoPerCapta)){
                    map.computeIfPresent(consumoPerCapta, (k, v) -> v + pessoasCasa);
                }
                else {
                    map.put(consumoPerCapta, pessoasCasa);
                    newArray.add(consumoPerCapta);
                }
            }
            Collections.sort(newArray);

            DecimalFormat fmt = new DecimalFormat("#.00");

            if (casos > 1) System.out.print("\n");

            System.out.println("Cidade# " + casos + ":");

            for (int j = 0; j < newArray.size(); j++){
                if(j == newArray.size() - 1) {
                    System.out.printf("%d-%d\n", map.get(newArray.get(j)), newArray.get(j));
                }
                else {
                    System.out.printf("%d-%d ", map.get(newArray.get(j)), newArray.get(j));
                }
            }
            fmt.setMaximumFractionDigits(2);
            fmt.setRoundingMode(RoundingMode.DOWN);

            System.out.println("Consumo medio: " + fmt.format( (double)consumoTotal/totPessoas) + " m3.");

            casos++;
        }
    }
}