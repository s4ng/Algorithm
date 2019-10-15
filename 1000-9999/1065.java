//한수
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int[] jari = new int[3];
        int answer;
        int num = in.nextInt();
        if(num>=100){
            answer = 99;
            for(int i = 100; i <= num; i++){
                jari[0] = i / 100;
                jari[1] = (i/10)%10;
                jari[2] = i%10;
                int d = jari[1] - jari[0];
                if(jari[1]+d==jari[2])
                    answer++;
            }
        }
        else
            answer = num;
        
        System.out.print(answer);
    }
}