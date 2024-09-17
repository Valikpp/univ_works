#include <stdio.h>
#include <string.h>

#define N_LIGNES 4
#define N_COLONNES 5

char lettre[][N_LIGNES][N_COLONNES]={
  {{' ',' ',' ',' ',' '}
   ,{' ',' ','/','\\',' '}
   ,{' ','/','-','-','\\'}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ','_',' ',' '}
   ,{' ','|','_',')',' '}
   ,{' ','|','_',')',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ','_',' ',' '}
   ,{' ','/',' ',' ',' '}
   ,{' ','\\','_',' ',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ','_',' ',' '}
   ,{' ','|',' ','\\',' '}
   ,{' ','|','_','/',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ','_',' ',' '}
   ,{' ','|','_',' ',' '}
   ,{' ','|','_',' ',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ','_',' ',' '}
   ,{' ','|','_',' ',' '}
   ,{' ','|',' ',' ',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ','_',' ',' '}
   ,{' ','/','_',' ',' '}
   ,{' ','\\','_','|',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ',' ',' ',' '}
   ,{' ','|','_','|',' '}
   ,{' ','|',' ','|',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ',' ',' ',' '}
   ,{' ','|',' ',' ',' '}
   ,{' ','|',' ',' ',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ',' ','_',' '}
   ,{' ',' ',' ','|',' '}
   ,{' ','\\','_','/',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ',' ',' ',' '}
   ,{' ','|','/',' ',' '}
   ,{' ','|','\\',' ',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ',' ',' ',' '}
   ,{' ','|',' ',' ',' '}
   ,{' ','|','_',' ',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ',' ',' ',' '}
   ,{' ','|','\\','/','|'}
   ,{' ','|',' ',' ','|'}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ',' ',' ',' '}
   ,{' ','|','\\','|',' '}
   ,{' ','|',' ','|',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ','_',' ',' '}
   ,{' ','/',' ','\\',' '}
   ,{' ','\\','_','/',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ','_',' ',' '}
   ,{' ','|','_',')',' '}
   ,{' ','|',' ',' ',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ','_',' ',' '}
   ,{' ','/',' ','\\',' '}
   ,{' ','\\','_','\\',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ','_',' ',' '}
   ,{' ','|','_',')',' '}
   ,{' ','|',' ','\\',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ','_',' ',' '}
   ,{' ','(',' ',' ',' '}
   ,{' ','_',')',' ',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ','_','_','_',' '}
   ,{' ',' ','|',' ',' '}
   ,{' ',' ','|',' ',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ',' ',' ',' '}
   ,{' ','|',' ','|',' '}
   ,{' ','\\','_','/',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ',' ',' ',' '}
   ,{' ','\\',' ',' ','/'}
   ,{' ',' ','\\','/',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ',' ',' ',' '}
   ,{' ','|',' ',' ','|'}
   ,{' ','|','/','\\','|'}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ',' ',' ',' '}
   ,{' ','\\','/',' ',' '}
   ,{' ','/','\\',' ',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ',' ',' ',' ',' '}
   ,{' ','\\','_','/',' '}
   ,{' ',' ','|',' ',' '}
   ,{' ',' ',' ',' ',' '}},

  {{' ','_','_',' ',' '}
   ,{' ',' ','/',' ',' '}
   ,{' ','/','_',' ',' '}
   ,{' ',' ',' ',' ',' '}}};


char espace[N_LIGNES][N_COLONNES]=
{{' ',' ',' ',' ',' '}
   ,{' ',' ',' ',' ',' '}
   ,{' ',' ',' ',' ',' '}
   ,{' ',' ',' ',' ',' '}};

void affiche(const char message[]) {

  for(int j = 0;j<N_LIGNES;j++){ 

    for(int i =0;message[i]!='\0';i++){
      if (message[i]!=' '){
        for (int k = 0;k<N_COLONNES;k++){
          printf("%c",lettre[message[i]-'A'][j][k]);
        }
      }else{
        for (int k = 0;k<N_COLONNES;k++){
          printf("%c",espace[j][k]);
        }
      }
    }
    printf("\n");
  }
}

int main(void) {
  affiche("HELLO WORLD VADIM");
  return 0;
}
