import java.util.Scanner;

class prime {
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
        int i, j, n, count;
        System.out.println("Enter the number of prime terms you want");
        n=sc.nextInt();
        System.out.println("first" + n + "prime numbers are :");
        for (i = 1; i <= n; i++) {
            count=0;
            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    count++;
                    break;
                }
            }
            if (count == 0) {
                System.out.println(i);
            }
        }
    }

}