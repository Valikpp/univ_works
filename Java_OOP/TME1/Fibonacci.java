public class Fibonacci {
    public static void main(String[] args){
        int v1 = 0;
        int v2 = 1;
        for (int somme = 0;somme<55;){
            somme = v1 + v2;
            System.out.print(somme + "\t");
            v1 = v2;
            v2 = somme;
        }
        System.out.print("\n");
    } 
}
