/*
 * ZADATAK 10114008 - 10114008
 * Učitati članove niza. Izračunati i ispisati broj parnih i neparnih članova niza odvojeno.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10114008.htm
 */

#include <stdio.h>

int main()
{
int i,n,parni=0,neparni=0;

printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int iNiz[n];

printf("Unesi elemente niza: \n");
for(i=0; i < n; i++)
{
scanf("%d", &iNiz[i]);
if (iNiz[i] % 2 == 0)    // clan niza paran?
{
parni+=1 ;
}
else if (iNiz[i] % 2 != 0)
neparni+=1;
}

printf("broj parnih ");
printf("%d", parni);
printf("\nbroj neparnih ");
printf("%d", neparni);

return 0;
}