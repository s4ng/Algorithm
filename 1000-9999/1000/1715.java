// 카드 정렬하기
import java.util.*;

public class Main{
	public static void main(String[] args) {

		int N;

		Scanner sc = new Scanner(System.in);

		N = sc.nextInt();

		PriorityQueue<Long> pq = new PriorityQueue<>();

		for (int i = 0; i < N; i++) {

			pq.add(sc.nextLong());
		}

		int answer = 0;

		while(pq.size() >= 2) {

			Long a = pq.poll();
			Long b = pq.poll();

			Long num = a + b;
			pq.add(num);
			answer += num;
		} 

		System.out.println(answer);
	}
} 
