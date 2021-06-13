// 행성 터널
import java.util.*;

class Pair {
    int a, b;

    public Pair(int a, int b) {
        this.a = a;
        this.b = b;
    }
}

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
    static List<Pair> x = new ArrayList<>();
    static List<Pair> y = new ArrayList<>();
    static List<Pair> z = new ArrayList<>();

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for(int i = 1; i <= n; i++) {
            int nowX = sc.nextInt();
            x.add(new Pair(nowX, i));
            int nowY = sc.nextInt();
            y.add(new Pair(nowY, i));
            int nowZ = sc.nextInt();
            z.add(new Pair(nowZ, i));
        }

        x.sort(new Comparator<Pair>() {
            @Override
            public int compare(Pair o1, Pair o2) {
                return Integer.compare(o1.a, o2.a);
            }
        });
        y.sort(new Comparator<Pair>() {
            @Override
            public int compare(Pair o1, Pair o2) {
                return Integer.compare(o1.a, o2.a);
            }
        });
        z.sort(new Comparator<Pair>() {
            @Override
            public int compare(Pair o1, Pair o2) {
                return Integer.compare(o1.a, o2.a);
            }
        });

        List<Edge> edges = new ArrayList<>();

        for(int i = 0; i < n - 1; i++) {
            edges.add(new Edge(x.get(i).b, x.get(i + 1).b, x.get(i + 1).a - x.get(i).a));
            edges.add(new Edge(y.get(i).b, y.get(i + 1).b, y.get(i + 1).a - y.get(i).a));
            edges.add(new Edge(z.get(i).b, z.get(i + 1).b, z.get(i + 1).a - z.get(i).a));
        }

        edges.sort(new Comparator<Edge>() {
            @Override
            public int compare(Edge o1, Edge o2) {
                return Integer.compare(o1.cost, o2.cost);
            }
        });

        parent = new int[n + 1];

        for(int i = 1; i <= n; i++) {
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
