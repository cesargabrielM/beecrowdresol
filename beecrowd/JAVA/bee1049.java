import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;
public class bee1049 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        String grupo = scan.next();
        String tipo = scan.next();
        String ali = scan.next();

        Map<String, String> animal = new HashMap<>();
        animal.put("vertebrado-ave-carnivoro", "aguia");
        animal.put("vertebrado-ave-onivoro", "pomba");
        animal.put("vertebrado-mamifero-onivoro", "homem");
        animal.put("vertebrado-mamifero-herbivoro", "vaca");
        animal.put("invertebrado-inseto-hematofago", "pulga");
        animal.put("invertebrado-inseto-herbivoro", "lagarta");
        animal.put("invertebrado-anelideo-hematofago", "sanguessuga");
        animal.put("invertebrado-anelideo-onivoro", "minhoca");

        String key = grupo + "-" + tipo + "-" + ali;

        System.out.println(animal.get(key));


        scan.close();
    }
}
