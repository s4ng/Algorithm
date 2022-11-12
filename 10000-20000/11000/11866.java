import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int m = sc.nextInt();

		Queue<Integer> q = new LinkedList<>();

		for(int i = 0; i < n; i++) {
			q.offer(i + 1);
		} 

		System.out.print("<");
		while(!q.isEmpty()) {
			
			for(int i = 0; i < m - 1; i++) {
				int tmp = q.poll();
				q.offer(tmp);
			} 
			
			System.out.print(q.poll());
			if(!q.isEmpty()) {
				System.out.print(", ");
			} 

		} 
		System.out.println(">");
	} 
} 
