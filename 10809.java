//알파벳 찾기
import java.util.Scanner;
 
public class Main{
    public static void main(String args[]){
    	Scanner sc = new Scanner(System.in);
    	String input = sc.next();
    	int[] alpha = new int[26];
    	for(int i = 0; i < alpha.length; i++) {
    		alpha[i] = -1;
    	}
    	
    	char[] arr = input.toCharArray();
    	sc.close();
    	for(int i = 0; i < arr.length;i++) {
    		int tmp = arr[i]-97;
    		if(alpha[tmp]==-1)
    			alpha[tmp] = i;
    	}
    	
    	for(int i = 0; i <alpha.length; i++) {
    		System.out.print(alpha[i]+" ");
    	}
    }
}