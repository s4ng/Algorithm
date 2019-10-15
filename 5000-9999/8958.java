//OX퀴즈
import java.util.Scanner;
 
public class Main{
    public static void main(String args[]){
    	Scanner sc = new Scanner(System.in);
    	int num = sc.nextInt();
    	String[] cases = new String[num];
    	for(int i = 0; i < num; i++) {
    		cases[i] = sc.next();
    	}
    	sc.close();
    	
    	int count, total;
    	for(String OXres : cases) {
    		count = 0;
    		total = 0;
    		for(int i = 0; i < OXres.length(); ++i) {
    			if(OXres.charAt(i) == 'O') {
    				total += ++count;
    			}
    			else
    				count = 0;
    		}
    		System.out.println(total);
    	}
    }
}