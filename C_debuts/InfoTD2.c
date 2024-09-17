
#include <stdio.h>
#include <assert.h>
#include <math.h>
#define MAX 1000000

int somme_carres(int m,int n){
    int s = 0;
    for (int i=m;i<=n;i++){
        s = s+ i*i;
    }
    return s;
}
int premier(int n){
    int max = (int)sqrt(n);
    for (int i = 2;i<max/2;i++){
        if (n%i == 0){
            return 0;
        }
    }
    return 1;
}

void afficheNombresPremiers(int n_max){
    for (int i=2;i<=n_max;i++){
        int res = premier(i);
        if (res!=0){
            printf("%d\n",i);
        }
    }
}

void afficheBilletsPieces(int s){
    int b5 = (s-s%5)/5;
    int b2 = ((s-b5*5) - (s-b5*5)%2)/2;
    int b1 = (s-b5*5 - b2*2);
    printf("Decomposition de %d euros:\n bil de 5 euros:%d\n bil de 2 euros:%d\n bil de 1 euro:%d",s,b5,b2,b1);
}

void afficheBilletsPiecesMultiple(int somme){
    int b5,b2,b1,somme_tmp=somme;
    b5 = somme/5;
    for (;b5>=0;b5--){
        somme_tmp = somme - (b5*5);
        b2 = somme_tmp/2;
        for(;b2>=0;b2--){
            b1=somme_tmp - (2*b2);
            printf("bil de 5 euros:%d bil de 2 euros:%d  bil de 1 euro:%d\n",b5,b2,b1);
        }

    }
}


int main(){
    //assert(somme_carres(1,5)==55);
    //printf("Liste des nombres premiers <= %d\n",MAX);
    //afficheNombresPremiers(MAX);
    afficheBilletsPiecesMultiple(29);
    return 0;
}