/*
 * ZADATAK 10112077 - 10112077
 * Učitati članove niza. Izračunati i ispisati proizvod pozitivnih članova niza koji su djeljivi sa 3.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10112077.htm
 */

#include <stdio.h>

int main()
{
int n;
int i,proizvod=1;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int iNiz[n];

printf("Unesi elemente niza: \n");
for(i=0; i < n; i++)
{
scanf("%d", &iNiz[i]);
if ((iNiz[i]%3 == 0) && (iNiz[i] > 0))
{
proizvod*=iNiz[i];
}
}

printf("proizvod: \n");
printf("\n%d", proizvod);

return 0;
}