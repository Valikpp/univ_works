#include <stdio.h>
void permute(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void permute_cir(int *a, int *b, int *c){
    permute(a,b);
    permute(b,c);
}

int main() {
    int a=10,b=20,c=30;
    permute_cir(&a,&b,&c);
    printf("%d,%d,%d",a,b,c);
    return 0;
}
