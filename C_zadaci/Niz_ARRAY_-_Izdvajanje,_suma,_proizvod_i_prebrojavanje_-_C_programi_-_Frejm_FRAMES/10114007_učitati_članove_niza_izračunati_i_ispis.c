/*
 * ZADATAK 10114007 - 10114007
 * Učitati članove niza. Izračunati i ispisati broj članova niza koji nisu djeljivi sa 4.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10114007.htm
 */

#include <stdio.h>

int main()
{
int n;
int i,broj=0;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int iNiz[n];

printf("Unesi elemente niza: \n");
for(i=0; i < n; i++)
{
scanf("%d", &iNiz[i]);
if (iNiz[i]%4 != 0)
broj+=1;
}

printf("broj: \n");
printf("\n%d", broj);

return 0;
}