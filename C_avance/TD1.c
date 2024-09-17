#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compte_mots_chaine (char * chaine){
    int nb_mots = 0;
    while(*chaine){
        if (*chaine == ' '){
            chaine++;
            continue;
        }
        nb_mots++;
        while((*chaine!=' ')&&(*chaine))chaine++;
    }
    return nb_mots;
}


void min_max_son(int tab[],int taille, int *max, int *min,int *son){

    if ( taille > 1){
        min_max_son(tab+1,taille-1,max,min,son);
        *son +=tab[0];
        *min = *min > tab[0] ? tab[0]:*min;
        *max = *max < tab[0]?tab[0]:*max;

    } else {
        *min = tab[0];
        *max = tab[0];
        *son = tab[0];
    }
}
int main (){
    // int min = 0;
    // int max = 100000;
    // int son = 0;
    // int tab[] = {123,456,789,101112,131415,161718,1920};
    // min_max_son(tab,sizeof(tab)/sizeof(int),&max,&min,&son);
    // printf("%d - %d - %d\n", min,max,son);
    return 0;
}