/*
 * ZADATAK 10111004 - 10111004
 * Učitati članove niza. Ispisati: članove niza koji su veći od slijedećeg člana.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10111004.htm
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
}

printf("Ispis elemenata niza koji su veci od sledeceg: ");
for(i=0; i < n-1; i++) {
if(iNiz[i]>iNiz[i+1])
{
printf("\n%d", iNiz[i]);
}
}

return 0;
}