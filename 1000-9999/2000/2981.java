// 검문
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for(int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        Arrays.sort(arr);
        int gcdNum = arr[1] - arr[0];

        for(int i = 2; i < n; i++) {
            gcdNum = gcd(gcdNum, arr[i] - arr[i - 1]);
        }

        for(int i = 2; i <= gcdNum; i++) {
            if(gcdNum % i == 0) {
                System.out.print(i);
                System.out.print(' ');
            }
        }
    }

    static int gcd(int a, int b) {
        while(b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }
}
