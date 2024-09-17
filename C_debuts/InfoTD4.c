#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#define N 5

void affiche( int tab[], int len, int p){
    for(int i = 0; i<len;i++){
        if (i%p==0){
            printf("\n");
        }
        printf("%d\t",tab[i]);
    }
    printf("\n");
}

void echange(float tab[], int i, int j){
    float temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
}

void init_alea(int tab[], int ln, int min, int max){
    for (int i=0; i<ln;i++){
        tab[i] = rand()%(max-min+1) + min;
    }
}

int *tirage(int max, int chance_max) {
/* renvoie le tirage de 5 numeros + numero chance */
    int i;
    int *res = malloc(6*sizeof(int));
    for (i = 0; i < 5; i++) {
        res[i] = 1 + (rand() % max);
    }
    res[5] = 1 + (rand() % chance_max);
    return res;
}
float v_abs(float x){
    if (x>=0){
        return x;
    }
    return -x;
}

int egal_eps(float x, float y, float eps){
    return v_abs(x-y)<eps;
}

int main() {
    /*int i;
    int *loto;
    srand(time(NULL));
    loto = tirage(49, 10);
    printf("Tirage du jour : ");
    for (i = 0; i < 5; i++) {
    printf("%d\t", loto[i]);
    }
    printf("\nNumero chance : %d\n", loto[5]);
    free(loto);*/
    assert(egal_eps(7.01, 7.11, 0.11));
    return 0;
}