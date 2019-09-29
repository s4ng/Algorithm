//숫자의 개수
import java.util.Scanner;
 
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        sc.close();
        int num = a*b*c;
        int[] count = new int[10];
            
        while(num>0){
            count[num%10]++;
            num/=10;
        }
        for(int i = 0; i < count.length; ++i){
            System.out.println(count[i]);
        }
    }
}