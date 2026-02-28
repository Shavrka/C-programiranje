/*
 * ZADATAK 10111009 - 10111009
 * Učitati članove niza. Ispisati članove niza sa ideksom koji nije djeljiv sa 4.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10111009.htm
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
for(i=0; i < n; i++)
{
scanf("%d", &iNiz[i]);
}

printf("Ispis elemenata niza sa indeksom koji nije djeljiv sa 4: ");
for(i=0; i < n; i++)
{
if(i%4 != 0)
{
printf("\n%d", iNiz[i]);
}
}

return 0;
}