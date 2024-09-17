public class TestComplexe {
    public static void main(String[]args){
        Complexe c1 = new Complexe(3,0);
        Complexe c2 = new Complexe();
        Complexe c3 = new Complexe();

        System.out.println(c1.toString());
        System.out.println(c2.toString());
        System.out.println(c3.toString());

        System.out.println("C1 is real? - " + c1.estReel());
        System.out.println("C2 is real? - " + c2.estReel());
        System.out.println("C3 is real? - " + c3.estReel());

        Complexe c1_plus_c2 = c1.addition(c2);
        System.out.println("C1 + C2 is "+c1_plus_c2.toString());

        Complexe c2_fois_c3 = c2.multiplication(c3);
        System.out.println("C2 * C3 is "+c2_fois_c3.toString());

    }
}
