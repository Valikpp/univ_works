public class Villageois {
    private String nom;
    private double poids;
    private boolean malade;
    public Villageois(String nomVillageois){
        nom = nomVillageois;
        poids = Math.random()*(150-50) + 50.0;
        malade = Math.random()<0.2;
    }
    public String toString(){
        if (malade){
            return "villageois : " + nom + ", poids : " + String.format("%.2f", poids) + " kg, malade : oui, peut soulever : "+ String.format("%.2f",poidsSouleve());
        }
        return "villageois : " + nom + ", poids : " + String.format("%.2f", poids) + " kg, malade : non, peut soulever : "+ String.format("%.2f",poidsSouleve());
    }
    public String getNom(){
        return nom;
    }
    public double getPoids(){
        return poids;
    }
    public boolean getMalade(){
        return malade;
    }
    public double poidsSouleve(){
        if (malade){
            return poids/4.0;
        }
        return poids/3.0;
    }

}
