import java.util.Scanner;

public class DieRoll{
    public static int yakkoScore;
    public static int wakkoScore;

    public DieRoll () {
    }

    public static int gcd(int a, int b){
        if (b == 0){
            return a;
        }
        else{
        return gcd(b, a%b);}
    }

     public static int isGreater(int x, int y){
        if (x > y)
            return x;
        else
            return y;
     }

     public static void main(String[] args)
     {
        Scanner scanner = new Scanner(System.in);
        yakkoScore = scanner.nextInt();
        wakkoScore = scanner.nextInt();

        int high = isGreater(yakkoScore, wakkoScore);
        int dot = 7 - high;
        int den = 6;
        int g = gcd(dot, den);
        dot /= g;
        den /= g;

        System.out.println(dot + "/" + den);

        scanner.close();
     }


}