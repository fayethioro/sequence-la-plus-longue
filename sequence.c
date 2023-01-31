#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int N ,val ,i;
    int idseq = 1, tseq = 0 ,  nbseq=1;
    int tSPL = 0;
    int max=0;
      do
      {
        /* controle de saisie*/
        printf("Entrez la nombre d'element a saisir :");
        scanf("%d",&N);
        if(N<1  || N>100)
            {
              printf("ATTENTION !!! y'a une erreurs \n");
              printf("le nombre d'element doit etre comprise entre 1 et 100\n");
              printf("Entrez la nombre d'element a saisir  :");
              scanf("%d",&N); 
            }
      } while (N<1  || N>100);
      do
      {
            /* code */
            for ( i = 1; i <= N; i++)
          {
              printf(" Entrez la valeur N° %d :",i);
              scanf("%d",&val);
              if(val<10  || val>50)
              {
                printf("ATTENTION !!! y'a une erreur \n");
                printf("la valeur saisie doit etre comprise entre 10  et 50\n");
                printf(" Entrez la valeur N° %d :",i);
                scanf("%d",&val);
              }
              if(i==1)
                max=val;
              if(val>=max)
              {
                  
                  tseq++;
              }
              else
              {
                  nbseq++;
                  tseq=1;
              }
              if (tSPL < tseq)
              {
                  idseq = i - (tseq -1 );
                  tSPL = tseq;
              }
              max=val; 
          }
      } while (val<10  || val>50);
      
      printf("la taille se la sequence la plus longue et croissant est %d\n",tSPL);
      printf("Elle se debute a la position %d\n",idseq);
      printf("on a %d sequences\n",nbseq);

    return 0;
}
