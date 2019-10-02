//음계
import java.util.Scanner;
 
public class Main{
    public static void main(String args[]){
    	Scanner sc = new Scanner(System.in);
    	int[] input = new int[8];
    	for(int i = 0; i < input.length; i++) {
    		input[i] = sc.nextInt();
    	}
    	sc.close();
    	
    	String output = "";
    	for(int i = 0; i < input.length - 1; i++) {
    		if(input[i] == input[i+1]-1) {
    			output = "ascending";
    		}
    		else if(input[i] == input[i+1]+1) {
    			output = "descending";
    		}
    		else {
    			output = "mixed";
    			break;
    		}
    	}
    	System.out.println(output);
    }
}