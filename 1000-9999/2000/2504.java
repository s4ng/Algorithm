// 괄호의 값
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {
	public static void main( String[] args ) throws IOException {

		BufferedReader br = new BufferedReader( new InputStreamReader( System.in ) );
		String brackets = br.readLine();
		System.out.println( checkBracket( brackets ) );
	}

	private static int checkBracket( String brackets ) {

		Stack< Character > st = new Stack<>();
		int result = 0;
		int value = 1;

		for ( int i = 0; i < brackets.length(); i++ ) {
			if ( brackets.charAt( i ) == '(' ) {
				st.push( brackets.charAt( i ) );
				value *= 2;
			} else if ( brackets.charAt( i ) == '[' ) {
				st.push( brackets.charAt( i ) );
				value *= 3;
			} else if ( brackets.charAt( i ) == ')' ) {
				if ( st.empty() || !st.peek().equals( '(' ) ) {
					return 0;
				} else if ( brackets.charAt( i - 1 ) == '(' ) {
					result += value;
				}
				st.pop();
				value /= 2;
			} else if ( brackets.charAt( i ) == ']' ) {
				if ( st.empty() || !st.peek().equals( '[' ) ) {
					return 0;
				} else if ( brackets.charAt( i - 1 ) == '[' ) {
					result += value;
				}
				st.pop();
				value /= 3;
			}
		}
		if ( !st.empty() ) return 0;
		return result;
	}
}
