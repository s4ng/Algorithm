import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int m = sc.nextInt();
		List<List<Character>> arr = new ArrayList<>();
		int[][] visited = new int[n][m];

		for(int i = 0; i < n; i++) {
			List<Character> tmp = new ArrayList<>();
			String floor = sc.next();
			char[] chars = floor.toCharArray();
			for(int j = 0; j < m; j++) {
				tmp.add(chars[j]);
				visited[i][j] = 0;
			} 
			arr.add(tmp);
		} 

		int[] v = {0, 0};
		int[] s = {1, -1};
		int count = 0;
		Queue<Pair> q = new LinkedList<>();
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(visited[i][j] == 1) {
					continue;
				} 
				count++;
				char t = arr.get(i).get(j);
				q.add(new Pair(i, j));
				visited[i][j] = 1;
				while(!q.isEmpty()) {
					Pair now = q.poll();
					for(int o = 0; o < 2; o++) {
						int nx, ny;
						if(t == '-') {
							nx = now.x + v[o];
							ny = now.y + s[o];
							if(nx >= 0 && nx < n && ny >= 0 && ny < m) {
								if(arr.get(nx).get(ny) != '-' || visited[nx][ny] == 1) {
									continue;
								} 
								q.offer(new Pair(nx, ny));
								visited[nx][ny] = 1;
							} 
						} else {
							nx = now.x + s[o];
							ny = now.y + v[o];
							if(nx >= 0 && nx < n && ny >= 0 && ny < m) {
								if(arr.get(nx).get(ny) != '|' || visited[nx][ny] == 1) {
									continue;
								} 
								q.offer(new Pair(nx, ny));
								visited[nx][ny] = 1;
							} 
						} 
					} 
				} 
			} 
		} 
		System.out.println(count);
	} 

	static class Pair {;
		int x, y;
		Pair(int x, int y) {
			this.x = x;
			this.y = y;
		} 
	} 
} 
