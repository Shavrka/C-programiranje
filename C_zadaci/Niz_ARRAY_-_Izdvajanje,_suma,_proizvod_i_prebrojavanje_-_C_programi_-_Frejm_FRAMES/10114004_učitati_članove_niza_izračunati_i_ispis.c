/*
 * ZADATAK 10114004 - 10114004
 * Učitati članove niza. Izračunati i ispisati broj članova niza koji su djeljivi sa 2 (paran).
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10114004.htm
 */

#include <stdio.h>

int main()
{
int i, br, n;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int niz[n];        // rezervisanje prostora za niz - ARRAY

for ( i = 0; i < n; i++ ) {
scanf ("%d", &niz[i]);    // ulaz clanova niza
}

br = 0;   // pocetna vrijednost brojaca
for ( i = 0; i < n; i++ )
{
if (niz[i] % 2 == 0) {   // clana niza paran?
br = br + 1;         // br += 1
}
}
printf("\nBrojač članova niza koji su djeljivi sa 2 (paran) = %d", br);

return 0;
}