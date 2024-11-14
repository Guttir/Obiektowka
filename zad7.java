public class Main {
    public static void main(String[] args) {
        float n = 5;
        float suma = 0;
        for (float i = 1; i <= n; i++){
            suma = suma + (i/i+1);
        }
        System.out.print(suma);
    }
}
