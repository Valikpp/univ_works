public class TestVillageois {
    public static void main(String[] args){

        Villageois paul = new Villageois("Paul");
        System.out.println(paul.toString());

        Villageois pierre = new Villageois("Pierre");
        System.out.println(pierre.toString());

        Villageois angelo = new Villageois("Angelo");
        System.out.println(angelo.toString());

        Villageois alex = new Villageois("Alex");
        System.out.println(alex.toString());

        double poidsRocher = 100.0;
        double poidsSouleveTotal = paul.poidsSouleve() + pierre.poidsSouleve() + angelo.poidsSouleve() + alex.poidsSouleve();
        
        if (poidsRocher<=poidsSouleveTotal){
            System.out.println("Les 4 villageois réussissent à soulever le rocher. :)");
        } else {
            System.out.println("Les 4 villageois ne réussissent pas à soulever le rocher. :(");
        }
    }
}
