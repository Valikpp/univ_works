public class TestCoureur {
    public static void main(String []args){
        Coureur c1 = new Coureur();
        Coureur c2 = new Coureur();
        Coureur c3 = new Coureur();
        Coureur c4 = new Coureur();
        System.out.println(c1.getNumDossard());
        System.out.println(c1.getTempsAu100());
        System.out.println(c1.getPossedeTemoin());
        c1.setPossedeTemoin(!c1.getPossedeTemoin());
        System.out.println(c1.getPossedeTemoin());
        System.out.println(c1.toString());

        double time = 0;
        c1.setPossedeTemoin(true);
        c1.courir();
        time += c1.getTempsAu100();
        c1.passeTemoin(c2);
        c2.courir();
        time += c2.getTempsAu100();
        c2.passeTemoin(c3);
        c3.courir();
        time += c3.getTempsAu100();
        c3.passeTemoin(c4);
        c4.courir();
        time += c4.getTempsAu100();
        System.out.println("Course de 400m est termine, temps totale = "+ String.format("%.2f",time)+"s");
    }
}
