public class TestAdresseWeb {
    public static void main (String[]args){
        AdresseWeb adr1 = new AdresseWeb("https","google.com","travel/flights?hl=fr");
        System.out.println(adr1.toString());
        AdresseWeb adr2 = new AdresseWeb("google.com","photo/images");
        System.out.println(adr2.toString());
        AdresseWeb adr3 = new AdresseWeb("google.com");
        System.out.println(adr3.toString());
    }
}
