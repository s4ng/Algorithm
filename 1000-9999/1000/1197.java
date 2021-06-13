// 최소 스패닝 트리
import java.util.*;

class Edge {
    int cost;
    int a;
    int b;

    public Edge(int a, int b, int cost) {
        this.a = a;
        this.b = b;
        this.cost = cost;
    }
}

public class Main {
    static int parent[];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int v = sc.nextInt();
        int e = sc.nextInt();

        List<Edge> edges = new ArrayList<>();

        for(int i = 0; i < e; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int cost = sc.nextInt();

            edges.add(new Edge(a, b, cost));
        }

        edges.sort(new Comparator<Edge>() {
            @Override
            public int compare(Edge o1, Edge o2) {
                return Integer.compare(o1.cost, o2.cost);
            }
        });

        parent = new int[v + 1];

        for(int i = 1; i <= v; i++) {
            parent[i] = i;
        }

        int answer = 0;
        for(int i = 0; i < edges.size(); i++) {
            Edge tmp = edges.get(i);
            if(!isSameParent(tmp.a, tmp.b)) {
                union(tmp.a, tmp.b);
                answer += tmp.cost;
            }
        }

        System.out.println(answer);
    }

    static int find(int a) {
        if(parent[a] == a) {
            return a;
        }
        return parent[a] = find(parent[a]);
    }

    static void union(int a, int b) {
        a = find(a);
        b = find(b);
        if(a != b) {
            parent[b] = a;
        }
    }

    static boolean isSameParent(int a, int b) {
        a = find(a);
        b = find(b);

        if(a == b) {
            return true;
        }
        return false;
    }
}
