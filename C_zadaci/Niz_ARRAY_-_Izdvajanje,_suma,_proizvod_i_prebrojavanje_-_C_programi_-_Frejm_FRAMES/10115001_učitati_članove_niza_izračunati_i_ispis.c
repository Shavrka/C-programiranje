/*
 * ZADATAK 10115001 - 10115001
 * Učitati članove niza. Izračunati i ispisati aritmetički sredinu svih članova niza.
 * Kategorija: Niz /ARRAY/ - Izdvajanje, suma, proizvod i prebrojavanje - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/101c/10115001.htm
 */

#include <stdio.h>

int main()
{
int i, s, br, n;
float as;
printf("Unesi broj elemenata niza: ");
scanf("%d", &n);
int niz[n];        // rezervisanje prostora za niz - ARRAY

for ( i = 0; i < n; i++ ) {
scanf ("%d", &niz[i]);    // ulaz clanova niza
}

s = 0;    // pocetna vrijednost sume
br = 0;   // pocetna vrijednost brojaca
for ( i = 0; i < n; i++ ) // indeks clana niza
{
s = s + niz[i];
br = br + 1;
}
as = s / br;   // aritmeticka sredina
printf("\nAritmeticka sredina clanova niza = %f", as);

return 0;
}