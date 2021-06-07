// 부분합
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, s;
        n = sc.nextInt();
        s = sc.nextInt();
        int[] arr = new int[n];

        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int start = 0;
        int end = 0;
        int sum = 0;
        int minLen = 100001;

        while(true) {
            if(sum >= s) {
                if(end - start < minLen) {
                    minLen = end - start;
                }
                sum -= arr[start++];
            } else if(end == n) {
                break;
            } else {
                sum += arr[end++];
            }
        }
        minLen = minLen == 100001 ? 0 : minLen;
        System.out.println(minLen);
    }
}
