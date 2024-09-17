#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int egales_rec(char *ch1, char *ch2){
    if (*ch1 != *ch2){
        return 0;
    }
    if (*ch1=='\0'&& *ch2=='\0'){
        return 1;
    }
    return egales_rec(ch1+1,ch2+1);
}

int rech_dic(int tab[],int ind1, int ind2, int val){
    if ((ind2-ind1)<=1 || ind1 == ind2){
        printf("int1 = %d, int2 = %d,\n",ind1,ind2);
        return 0;
    }
    int m = (ind1+ind2)/2;
    if (tab[m]==val){
        return m; 
    }
    else if(tab[m]>val){
        return rech_dic(tab,ind1,m-1,val);
    }
    else{
        return rech_dic(tab,m+1,ind2,val);
    }
}
int main(){
    int tab[10] = {0,1,2,3,4,4,4,5,6,7};
    printf("%d\n", rech_dic(tab,0,9,2));
    return 0;
}