// 소수의 연속합
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        n = sc.nextInt();
        List<Integer> arr = new ArrayList<>();

        boolean[] visited = new boolean[n + 1];
        visited[0] = true;
        visited[1] = true;

        for(int i = 2; i <= n; i++) {
            if(!visited[i]) {
                arr.add(i);
                for(int j = i + i; j <= n; j += i) {
                    visited[j] = true;
                }
            }
        }

        int start = 0;
        int end = 0;
        int sum = 0;
        int answer = 0;

        while(true) {
            if(sum >= n) {
                sum -= arr.get(start++);
            } else if(end == arr.size()) {
                break;
            } else {
                sum += arr.get(end++);
            }

            if(sum == n) {
                answer++;
            }
        }

        System.out.println(answer);
    }
}
