/*
 * ZADATAK 10112045 - 10112045
 * Učitati članove niza. Izračunati i ispisati sumu članova niza koji nisu djeljivi sa 4.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10112045.htm
 */

#include <stdio.h>

int main()
{
int n;
int i,suma=0;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int iNiz[n];

printf("Unesi elemente niza: \n");
for(i=0; i < n; i++)
{
scanf("%d", &iNiz[i]);
if (iNiz[i]%4 != 0)
{suma+=iNiz[i];
}}

printf("suma: \n");
printf("\n%d", suma);

return 0;
}