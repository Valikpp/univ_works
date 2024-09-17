public class TestLettre{
    public static void main(String[] args){
        Lettre l = null;

        // for(char c = 'a';c<='z';c++){
        //     l = new Lettre(c);
        //     System.out.println(l.getCodeAscii());
        // }

        for(char c = 'a';c<='z';c++){
            l = new Lettre(c);
            if(((int)c - (int)'a')%5==0){
                System.out.print("\n");
            }
            System.out.print(l.getCarac()+ "\t");
        }
        System.out.print("\n");

        
    }
}