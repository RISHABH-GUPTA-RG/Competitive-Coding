import java.util.Scanner;

public class A_Rudolf_and_the_Ticket {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); // number of test cases

        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt(); // number of coins in left pocket
            int m = scanner.nextInt(); // number of coins in right pocket
            int k = scanner.nextInt(); // maximum sum of two coins

            int[] left = new int[n];
            for (int j = 0; j < n; j++) {
                left[j] = scanner.nextInt();
            }

            int[] right = new int[m];
            for (int j = 0; j < m; j++) {
                right[j] = scanner.nextInt();
            }

            int count = 0;
            for (int l : left) {
                for (int r : right) {
                    if (l + r <= k) {
                        count++;
                    }
                }
            }

            System.out.println(count);
        }
        scanner.close();
    }
}