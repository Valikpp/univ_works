public class Ballon {
    private int diametre;
    private String couleur;
    public Ballon(int diametre, String couleur){
        this.diametre = diametre;
        this.couleur = couleur;
    }
    public String toString(){
        return "ballon "+couleur+" "+ diametre + " cm"; 
    }
}
