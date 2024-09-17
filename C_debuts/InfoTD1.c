#include <stdio.h>
/*All #include librery*/
#define TNORMAL 11.4
#define TMOINS14 4.5
#define TMOINS26S 4.9
#define TMOINS26WE 7.90
#define TMATIN 7.10
/*All #define const*/

void Hello(int year){
    printf("Plus grand est %d\n",year);
}

int plusgrand(int a, int b, int c){
    if ((a>b) && (a>c)){
        return a;
    } else if (b>c){
        return b;
    } else{
        return c;
    }
}
int signeSomme(int a, int b){
    if (a>-b){
        return 1;
    }
    if (a<-b){
        return -1;
    }
    return 0;
    /* return a>-b?1:(a<-b)?-1:0*/
}
int prixPlace(int age, int day, float hour){
    float prix = TNORMAL;
    if (age<14){
        prix = TMOINS14;
    }
    if (age<26 && day>=1 && day<=5){
        prix = TMOINS26S;
    } else if (hour<=11.00 && hour>=8.00){
        prix = TMATIN;
    } else if (age<26){
        prix = TMOINS26WE;
    }
    return prix;
}

int main(int year){
    // New codes
    Hello(prixPlace(18,5,18));
    return 0;
}
/*
op1?op2:op3
Si op1 vrai alors op2 sinon op3 
*/
