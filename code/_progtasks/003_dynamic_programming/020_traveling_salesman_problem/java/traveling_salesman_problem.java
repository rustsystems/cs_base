

public class traveling_salesman_problem {
    private static final int INF = 9999999;
    private int n;
    private int[][] distance;
    private int[][] memo;

    public traveling_salesman_problem(int[][] distance) {
        this.distance = distance;
        this.n = distance.length;
        this.memo = new int[this.n][1 << this.n];
    }

    public int solve() {
        for (int i = 0; i < this.n; i++) {
            Arrays.fill(memo[i], -1);
        }
        return this.tsp(0, 1);
    }
    
    private int tsp(int current, int visited) {
        if (visited == (1 << n) - 1) {
            return distance[current][0];
        }
        if (memo[current][visited] != -1) {
            return memo[current][visited];
        }
        int minDistance = INF;
        for (int i = 0; i < n; i++) {
            if (i != current && ((visited & (1 << i)) == 0)) {
                int newDistance = distance[current][i] + tsp(i, visited | (1 << i));
                minDistance = Math.min(minDistance, newDistance);
            }
        }
        memo[current][visited] = minDistance;
        return minDistance;
    }

    public static void main(String args[]) {
        int[][] distances = {{0},{0}};
        traveling_salesman_problem tspSolver = new traveling_salesman_problem(distances);
        tsp_results = tspSolver.solve();
    }
}