//평균 점수
import java.util.Scanner;
 
public class Main{
    public static void main(String args[]){
    	Scanner sc = new Scanner(System.in);
    	int[] input = new int[5];
    	for(int i = 0; i < input.length; i++) {
    		input[i] = sc.nextInt();
    	}
    	int total = 0;
    	for(int res : input) {
    		if(res <= 40) {
    			total += 40;
    		}
    		else
    			total += res;
    	}
    	System.out.println(total/5);
    }
}