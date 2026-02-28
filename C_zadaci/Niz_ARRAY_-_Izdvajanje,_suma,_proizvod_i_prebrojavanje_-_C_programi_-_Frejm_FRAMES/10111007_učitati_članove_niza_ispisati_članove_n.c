/*
 * ZADATAK 10111007 - 10111007
 * Učitati članove niza. Ispisati članove niza sa neparnim ideksom.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10111007.htm
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

printf("Ispis elemenata niza sa neparnim indeksom: ");
for(i=0;i < n; i++)
{
if(i%2 != 0)
{
printf("\n%d", iNiz[i]);
}
}
return 0;
}