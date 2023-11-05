// 연구소
import java.util.*;

public class Main{
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int n, m;

		n = sc.nextInt();
		m = sc.nextInt();

		int[][] arr = new int[n][m];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				arr[i][j] = sc.nextInt();
			} 
		} 

		int max = -1;

		for(int a = 0; a < n; a++) {
			for(int b = 0; b < m; b++) {
				if(arr[a][b] != 0) {
					continue;
				} 
				for(int c = 0; c < n; c++ ) {
					for(int d = 1; d < m; d++) {
						if(arr[c][d] != 0 ||( a == c && b == d ) ) {
							continue;
						} 
						for(int e = 0; e < n; e++) {
							for(int f = 0; f < m; f++) {
								if(arr[e][f] != 0 || ((e == c && f == d) || (e == a && f == b))) {
									continue;
								}

								int safeArea = getSafeArea(arr, a, b, c, d, e, f);
								max = safeArea > max ? safeArea : max;
							} 
						}
					} 
				} 
			} 
		} 

		System.out.println(max);
	} 

	public static int getSafeArea(int[][] arr, int a, int b, int c, int d, int e, int f) {

		Queue<Pair> qp = new LinkedList<>();

		int n = arr.length;
		int m = arr[0].length;

		int[][] newArr = new int[n][m];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {

				newArr[i][j] = arr[i][j];
				if(i == a && j == b) {
					newArr[i][j] = 1;
				} 
				if(i == c && j == d) {
					newArr[i][j] = 1;
				} 
				if(i == e && j == f) {
					newArr[i][j] = 1;
				} 

				if(newArr[i][j] == 2) {
					qp.add(new Pair(i, j));
				} 
			} 
		} 

		int[] dx = {1, 0, -1, 0};
		int[] dy = {0, 1, 0, -1};

		while(!qp.isEmpty()) {

			Pair front = qp.poll();
			int x = front.getX();
			int y = front.getY();

			for(int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];
				if(nx < 0 || nx >= n || ny < 0 || ny >= m) {
					continue;
				} 
				if(newArr[nx][ny] == 0) {
					newArr[nx][ny] = 2;
					qp.add(new Pair(nx, ny));
				} 
			} 
		} 

		int safeArea = 0;

		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(newArr[i][j] == 0) {
					safeArea++;
				} 
			} 
		} 

		return safeArea;
	} 

	public static class Pair {

		public int x;
		public int y;

		public Pair(int x, int y) {
			this.x = x;
			this.y = y;
		} 

		public int getX() {
			return this.x;
		} 

		public int getY() {
			return this.y;
		} 
	} 
} 
