// 문자열 폭발
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb;

        String s = br.readLine();
        String bomb = br.readLine();

        Stack<Character> stack = new Stack<>();

        for(char c : s.toCharArray()) {
            stack.push(c);
            if(c == bomb.charAt(bomb.length() - 1)) {
                if (stack.size() >= bomb.length()) {
                    boolean flag = true;
                    for (int i = 0; i < bomb.length(); i++) {
                        if (stack.get(stack.size() - bomb.length() + i) != bomb.charAt(i)) {
                            flag = false;
                            break;
                        }
                    }
                    if (flag) {
                        for (int i = 0; i < bomb.length(); i++) {
                            stack.pop();
                        }
                    }
                }
            }
        }

        sb = new StringBuilder();
        while(!stack.isEmpty()) {
            sb.append(stack.pop());
        }
        System.out.println(sb.length() > 0 ? sb.reverse().toString() : "FRULA");
    }
}
