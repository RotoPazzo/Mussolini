#include<stdio.h> 
#include<stdlib.h>
#include <math.h>
void quadrato( int lato);{
     float diagonale;
     diagonale=lato*sqrt(2);
     printf("la diagonale vale %.2f\n",diagonale);
    printf("il perimetro vale %d",lato*4);
    printf("l\'area vale %d",lato*lato);}
main() {
	int a;
	do { 
	printf("inserisci il lato a:\n");
	scanf("%d",&a);
} while(a<=0);
quadrato(a);
system("PAUSE");
}
