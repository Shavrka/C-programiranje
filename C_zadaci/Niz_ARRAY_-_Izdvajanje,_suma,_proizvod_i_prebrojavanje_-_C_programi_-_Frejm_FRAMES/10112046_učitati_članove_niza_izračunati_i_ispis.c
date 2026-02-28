/*
 * ZADATAK 10112046 - 10112046
 * Učitati članove niza. Izračunati i ispisati sumu članova niza koji su djeljivi sa 2 (paran).
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10112046.htm
 */

#include <stdio.h>

int main()
{
int i, s, n;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int niz[n];        // rezervisanje prostora za niz - ARRAY

for ( i = 0; i < n; i++ ) {
scanf ("%d", &niz[i]);    // ulaz clanova niza
}

s = 0;    // pocetna vrijednsot sume
for ( i = 0; i < n; i++ )
{
if (niz[i] % 2 == 0) {   // clana niza paran?
s = s + niz[i];
}
}
printf("\nSuma parnih clanova niza = %d", s);

return 0;
}