import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Napisz n");
        int n = scanner.nextInt();
        for (int i = 1; i <=n; i++){
            if (n % i == 0){
                System.out.println(i);
            }
        }

        int i = 1;
        while (i <=n){
            if (n % i == 0){
                System.out.println(i);
            }
            i++;
        }
        
        do{
            if (n % i == 0){
                System.out.println(i);
            }
            i++;
        } while (i <= n);
        
        scanner.close();
    }
}
