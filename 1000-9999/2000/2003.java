// 수들의합2
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, m, answer = 0;
        n = sc.nextInt();
        m = sc.nextInt();
        int[] arr = new int[n];

        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int start = 0;
        int end = 0;
        int sum = 0;

        while(true) {
            if(sum >= m) {
                sum -= arr[start++];
            } else if(end >= n) {
                break;
            } else {
                sum += arr[end++];
            }

            if(sum == m) {
                answer++;
            }
        }

        System.out.println(answer);
    }
}
