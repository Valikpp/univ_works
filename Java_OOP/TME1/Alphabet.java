public class Alphabet {
    public static void main (String[] args){

        // QUESTION 101.1
        // for(char c = '0';c<='9';c++){
        //     System.out.println(c + " a le code : " + (int)c);
        // }
        // for(char c = 'A';c<='Z';c++){
        //     System.out.println(c + " a le code : " + (int)c);
        // }
        char c = '0';
        while (c<='9'){
            System.out.println(c + " a le code : " + (int)c);
            c++;
        }
        c = 'A';
        while (c<='Z'){
            System.out.println(c + " a le code : " + (int)c);
            c++;
        }

    }
}
