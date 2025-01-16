import java.util.Scanner;
public class bee1046 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int hi = scan.nextInt();
        int hf = scan.nextInt();
        int h;
        if (hi >= hf){
            h = (24 - hi) + hf;
        }
        else{
            h = hf - hi;
        }

        System.out.printf("O JOGO DUROU %d HORA(S)\n", h);
        scan.close();

    }

}
