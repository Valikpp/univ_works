#include <stdio.h>
#include <stdlib.h>

typedef struct cell{
    int donnee;
    struct cell * suivant;
} cell;

cell* Creer_cellule(int d){
    cell* res = NULL;
    res = (cell*)malloc(sizeof(cell));
    res->donnee = d; // (*res).donnee = d
    res->suivant = NULL;
    return res;
}
void Afficher_liste_int(cell *liste){
    /* Affiche les champs donnee des elements de la liste */
    if (liste == NULL){
        printf("NULL\n");
    }
    cell *courant = liste;
    while (courant != NULL) {
        printf("%d ", courant->donnee);
        courant = courant->suivant;
    }
    printf("\n");
}
int len(cell *liste){
    cell *courant = liste;
    int i = 0;
    while (courant != NULL) {
        courant = courant->suivant;
        i++;
    }
    return i;
}
int existe(cell *liste, int val){   
    cell *courant = liste;
    for(int i=0;i<len(liste);i++){
        if(courant->donnee == val){
            return 1;
        }
        courant = courant->suivant;
    }
    return 0;
}
cell* Inserer_tete (int d, cell* liste){
    cell* nliste;
    nliste = Creer_cellule(d);
    nliste->suivant = liste;
    return nliste;
}
cell* Inserer_fin_it (int d, cell* liste){
    cell* ncell = Creer_cellule(d);
    if (liste==NULL){
        return ncell;
    }
    cell* lst = liste;
    while (lst->suivant!=NULL)
    {
        lst = lst->suivant;
    }
    lst->suivant = ncell;
    return liste;
    
}
cell* Renvoyer_element_debut(cell *liste, int val){
    cell *courant = liste;
    for(int i=0;i<len(liste);i++){
        if(courant->donnee == val){
            return courant;
        }
        courant = courant->suivant;
    }
    return NULL;
}
cell* Inserer_en_pos(int d, int pos, cell *liste){
    int lenlist = len(liste);
    cell* ncell = Creer_cellule(d);
    if (lenlist<=pos){
        return Inserer_fin_it(d,liste);
    }
    if (liste==NULL || pos==0){
        ncell->suivant = liste;
        return ncell;
    }
    cell* lst = liste;
    for (int i=0;i<=lenlist;i++){
        if (i+1 == pos){
            ncell->suivant = lst->suivant;
            lst->suivant = ncell;
            return liste;
        }
        lst=lst->suivant;
    }
}
cell* Liberer_liste(cell* liste){
    cell* lst = liste;
    cell* tmp;
    while(lst->suivant!=NULL){
        tmp = lst;
        lst = lst->suivant;
        free(tmp);
    }
    free(lst);
    return NULL;
}



int main(){
    cell* res1 = Creer_cellule(1);
    res1->suivant =  Creer_cellule(7);
    res1->suivant->suivant =  Creer_cellule(15);
    res1->suivant->suivant->suivant =  Creer_cellule(0);
    cell* res2 = NULL;
    //Afficher_liste_int(res1);
    res1 = Inserer_fin_it(155, res1);
    Afficher_liste_int(res1);
    Afficher_liste_int(Inserer_en_pos(777,0,res1));
    res1 = Liberer_liste(res1);
    Afficher_liste_int(res1);
    return 0;
}
