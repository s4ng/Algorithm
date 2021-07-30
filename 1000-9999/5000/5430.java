// AC
import java.util.*;

public class Main {
    public static Scanner sc = new Scanner(System.in);
    public static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) {

        ArrayDeque<Integer> deque;
        int T = sc.nextInt();
        StringTokenizer st;

        while(T --> 0) {
            String p = sc.next();
            int n = sc.nextInt();
            st = new StringTokenizer(sc.next(), "[],");


            deque = new ArrayDeque<>();

            for(int i = 0; i < n; i++) {
                deque.add(Integer.parseInt(st.nextToken()));
            }

            boolean isError = false;
            boolean isReverse = false;

            for(char c : p.toCharArray()) {


                if(c == 'R') {
                    isReverse = isReverse ? false : true;
                } else {

                    if(deque.isEmpty()) {
                        isError = true;
                        break;
                    }

                    if(isReverse) {
                        deque.pollLast();
                    } else {
                        deque.pollFirst();
                    }
                }
            }

            if(isError) {
                System.out.println("error");

            } else {
                sb.append('[');
                if(!deque.isEmpty()) {
                    if(isReverse) {
                        sb.append(deque.pollLast());
                        while(!deque.isEmpty()) {
                            sb.append(',');
                            sb.append(deque.pollLast());
                        }
                    } else {
                        sb.append(deque.pollFirst());
                        while(!deque.isEmpty()) {
                            sb.append(',');
                            sb.append(deque.pollFirst());
                        }
                    }
                }
                sb.append(']');
                System.out.println(sb.toString());
            }
            sb.setLength(0);
        }
    }
}
