/*
 * ZADATAK 10111002 - 10111002
 * Učitati članove niza. Ispisati članove niza sa parnim indeksom.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10111002.htm
 */

#include <stdio.h>

int main()
{
int n;
int i;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int iNiz[n];

printf("Unesi elemente niza: \n");
for(i=0; i < n; i++) {
scanf("%d", &iNiz[i]);
}		// for

printf("Ispis elemenata niza sa parnim indeksom: ");
for(i=0; i < n; i++) {
if(i % 2 == 0)
printf("\n%d", iNiz[i]);
}		// for

return 0;
}