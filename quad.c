#include<stdio.h>
#include<stdlib.h>
#include <math.h>
void quadrato( float lato){
float diagonale;
diagonale=lato*sqrt(2);
printf("la diagonale vale %f\n",diagonale);
printf("il perimetro vale %f\n",lato*4);
printf("l\'area vale %f\n",lato*lato);}
int main() {
float a;
do {
printf("inserisci il lato:\n");
scanf("%f",&a);
}while(a<=0);
quadrato(a);
}
